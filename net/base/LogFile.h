#ifndef __NO_NET_BASE_LOGFILE_H__
#define __NO_NET_BASE_LOGFILE_H__
#include "net/base/types.h"
#include "net/base/noncopyable.h"
#include <string>
#include <boost/thread/mutex.hpp>

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
                int flushInterval = 3,
                int checkEveryN = 1024);
        ~LogFile();
        bool rollFile();
        void flush();
        void append(const char *inLine, int len);

    private:
        static std::string getLogFileName(const std::string &basename, time_t *now);

        void appendToFile(const char *inLine, int len);

    private:
        const static int kRollPerSeconds_ = 60 * 60 * 24;

        const string basename_;
        const off_t rollSize_;
        const int flushInterval_;
        const int checkEveryN_;

        int count_;

        boost::mutex mutex_;
        time_t startOfPeriod_;
        time_t lastRoll_;
        time_t lastFlush_;
        std::unique_ptr<FileUtil::AppendFile> file_;
    };
} // namespace md

#endif