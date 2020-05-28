
#include "net/base/FileUtil.h"
#include "net/base/Logging.h"
#include <assert.h>
#include <errno.h>
#include <stdio.h>

using namespace md::FileUtil;

AppendFile::AppendFile(const std::string &filename)
    : fp_(::fopen(filename.c_str(), "ae")),
      write_bytes_(0)
{
    assert(fp_);
    ::setbuffer(fp_, buf_, sizeof buf_);
}
AppendFile::~AppendFile()
{
    ::fclose(fp_);
}
void AppendFile::append(const char *logline, size_t len)
{
    auto n = write(logline, len);
    auto remain = len - n;
    while (remain > 0)
    {
        auto x = write(logline + n, remain);
        if (x == 0)
        {
            int err = ferror(fp_);
            if (err)
            {
                fprintf(stderr, "AppendFile::append() failed %s\n", "1");
                //  strerror_tl(err));
            }
            break;
        }
        n += x;
        remain = len - n; // remain -= x
    }
}
void AppendFile::flush()
{
    ::fflush(fp_);
}
off_t AppendFile::write_bytes() const
{
    return this->write_bytes_;
}

size_t AppendFile::write(const char *logline, size_t len)
{
    return ::fwrite(logline, len, 1, fp_);
    // return ::fwrite_unlocked(logline, 1, len, fp_);
}
