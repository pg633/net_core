#ifndef _NO_NET_BASE_FILEUTIL_H__
#define _NO_NET_BASE_FILEUTIL_H__
#include "net/base/noncopyable.h"
#include <string>
#include <sys/types.h> // for off_t
namespace md
{

    namespace FileUtil
    {

        class AppendFile : public noncopyable
        {
        public:
            explicit AppendFile(const std::string &filename);
            ~AppendFile();

            void append(const char *logline, size_t len);
            void flush();
            off_t write_bytes() const;

        private:
            size_t write(const char *logline, size_t len);

        private:
            FILE *fp_;
            char buf_[64 * 1024];
            off_t write_bytes_;
        };

    } // namespace FileUtil
} // namespace md

#endif