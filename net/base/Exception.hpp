#ifndef _NO_NET_BASE_EXCEPTION_H_
#define _NO_NET_BASE_EXCEPTION_H_
#include <exception>
#include <string>
#include "net/base/CurrentThread.h"
namespace md
{
    class Exception : std::exception
    {
    public:
        Exception(std::string msg):message_(std::move(msg)),stack_(CurrentThread::stackTrack(false))
      
        {
        }
        ~Exception() noexcept override
        {
        }
        const char *what() const noexcept override
        {
            return message_.c_str();
        }
        const char *stackTrace() const
        {
            return stack_.c_str();
        }
        std::string getMsg(){
            return message_;
        }

    private:
        std::string message_;
        std::string stack_;
    };

} // namespace md

#endif