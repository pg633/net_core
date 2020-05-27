#ifndef _NO_NET_BASE_PROCESSINFO_H
#define _NO_NET_BASE_PROCESSINFO_H
 
#include <sys/types.h>
#include <string>
#include <unistd.h>

namespace md
{
    namespace detail
    {
        pid_t pid();
        std::string hostname();
     
    } // namespace detail
} // namespace md

#endif