#ifndef _NO_NET_BASE_TYPE_H_
#define _NO_NET_BASE_TYPE_H_

#include <stdint.h>
#include <string.h> // memset
#include <string>

namespace md
{

    using std::string;

    inline void memZero(void *p, size_t n)
    {
        memset(p, 0, n);
    }

    template <typename To, typename From>
    inline To implicit_cast(From const &f)
    {
        return f;
    }

    template <typename To, typename From>
    inline To down_cast(From *f)
    {
        return static_cast<To>(f);
    }
} // namespace md

#endif