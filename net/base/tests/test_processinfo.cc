#include <iostream>
#include "net/base/LogFile.h"
#include "net/base/ProcessInfo.h"
#include <assert.h>

#include <iostream>
#include <boost/thread/mutex.hpp>
#include <boost/thread/thread.hpp>
#include <boost/thread/lock_guard.hpp>
#include <string.h>


void test_log_file()
{
      md::LogFile  logfile("base_log",0);
      char ch [100] = "1230";
      logfile.append(ch,strlen(ch));


}
int main()
{
    // test_logfile();
    // test_assert();
    // test_boost_mutex();
    // test_boost_mutex2();
    test_log_file();
    return 0;
}


void test_logfile()
{
    std::cout << md::detail::hostname() << std::endl;
    std::cout << md::detail::pid() << std::endl;

    time_t now = 0;
    // std::string filename = md::LogFile::getLogFileName("basename_", &now);
    // std::cout << filename << std::endl;
}
void test_assert()
{
    std::cout << "begin assert" << std::endl;
    int num = 0;
    assert(num == 0);
    //  assert(num != 0);
    //  任务会停止在这个地方
    std::cout << "end assert" << std::endl;
}

boost::mutex mutex;
int count = 0;

void Counter()
{
    mutex.lock();

    int i = ++count;
    std::cout << "count == " << i << std::endl;

    // 前面代码如有异常，unlock 就调不到了。
    mutex.unlock();
}
void test_boost_mutex()
{
    // 创建一组线程。
    boost::thread_group threads;
    for (int i = 0; i < 4; ++i)
    {
        threads.create_thread(&Counter);
    }

    // 等待所有线程结束。
    threads.join_all();
}

class b
{
public:
    b()
    {
    }
    b(const b &it) = delete;
    void get()
    {
        boost::lock_guard<boost::mutex> lock(mutex_);

        int i = 1;
        std::cout << "count == " << i << std::endl;
        // 前面代码如有异常，unlock 就调不到了。
        // mutex_.unlock();
    }

private:
    boost::mutex mutex_;
};
void test_boost_mutex2()
{

    b bb;
    bb.get();
    bb.get();
}
