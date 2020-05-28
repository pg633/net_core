#include "net/base/ProcessInfo.h"

namespace md::detail
{

    std::string hostname()
    {
        char buf[256];
        if (::gethostname(buf, sizeof buf) == 0)
        {
            buf[sizeof(buf) - 1] = '\0';
            return buf;
        }
        else
        {
            return "unknownhost";
        }
    }

    pid_t pid()
    {
        return ::getpid();
    }

} // namespace md::detail