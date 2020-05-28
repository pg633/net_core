#include "net/base/Logging.h"



#include <errno.h>
#include <stdio.h>
#include <string.h>


__thread char t_errnobuf[512];
const char *md::strerror_tl(int savedErrno)
{
    // return strerror_r(savedErrno, t_errnobuf, sizeof t_errnobuf);
}