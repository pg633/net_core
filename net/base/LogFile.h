#ifndef __NO_NET_BASE_LOGFILE_H__
#define __NO_NET_BASE_LOGFILE_H__
#include "net/base/types.h"
#include "net/base/noncopyable.h"
#include <string>

namespace md
{
    namespace FileUtil
    {
        class AppendFile;
    }

    class LogFile : public noncopyable
    {
    public:
        LogFile(const std::string &basename,
                off_t rollSize,
                bool threadSafe = true,
                int flushInterval = 3,
                int checkEveryN = 1024);
        ~LogFile();
        bool rollFile();

        static std::string getLogFileName(const std::string &basename, time_t *now);

    private:
        const static int kRollPerSeconds_ = 60 * 60 * 24;

        const string basename_;
        const off_t rollSize_;
        const int flushInterval_;
        const int checkEveryN_;

        int count_;

        time_t startOfPeriod_;
        time_t lastRoll_;
        time_t lastFlush_;
        // std::unique_ptr<FileUtil::AppendFile> file_;
    };
} // namespace md

#endif