#include "net/base/LogFile.h"
#include "net/base/ProcessInfo.h"
#include <time.h>
#include <memory>

// using namespace md;

md::LogFile::LogFile(const string &basename,
                 off_t rollSize,
                 bool threadSafe,
                 int flushInterval,
                 int checkEveryN)
    : basename_(basename),
      rollSize_(rollSize),
      flushInterval_(flushInterval),
      checkEveryN_(checkEveryN),
      count_(0),
      startOfPeriod_(0),
      lastRoll_(0),
      lastFlush_(0)
{
    //   assert(basename.find('/') == string::npos);
    rollFile();
}

md::LogFile::~LogFile()
{
}

std::string md::LogFile::getLogFileName(const std::string &basename, time_t *now)
{
    std::string filename;
    filename.reserve(basename.size() + 64);
    filename = basename;

    char timebuf[32];
    struct tm tm;
    *now = time(nullptr);
    gmtime_r(now, &tm);
    strftime(timebuf, sizeof timebuf, ".%Y%m%d-%H%M%S.", &tm);
    filename += timebuf;

    filename += md::detail::hostname();
    char pidbuf[32];
    snprintf(pidbuf, sizeof pidbuf, ".%d", md::detail::pid());
    filename += pidbuf;
    filename += ".log";
    return filename;
}
bool md::LogFile::rollFile()
{
    time_t now = 0;
    std::string filename = getLogFileName(basename_, &now);
    time_t start = now / kRollPerSeconds_ * kRollPerSeconds_;
    if (now > lastRoll_)
    {
        lastRoll_ = now;
        lastFlush_ = now;
        startOfPeriod_ = start;
        // file_.reset(new FileUtil::AppendFile(filename));
        return true;
    }
    return false;
}