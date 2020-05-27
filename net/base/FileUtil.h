#ifndef _NO_NET_BASE_FILEUTIL_H__
#define _NO_NET_BASE_FILEUTIL_H__
#include "net/base/noncopyable.h"
#include <string>
namespace md
{

    namespace FileUtil
    {

        class AppendFile : public noncopyable
        {
        public:
            AppendFile(std::string string)
            {
            }
            ~AppendFile() {

            }
        };

    } // namespace FileUtil
} // namespace md

#endif