#include <iostream>
#include "net/base/Exception.hpp"

#include <boost/thread/thread.hpp>
#include <boost/thread/mutex.hpp>
void test_error()
{
    md::Exception e("my exception");
    std::cout << "输出状态" << e.getMsg() << std::endl;
    std::cout << "输出状态" << e.what() << std::endl;
    std::cout << "输出状态" << e.stackTrace() << std::endl;
}

void hello()
{
    std::cout << "Hello world, I''m a thread!"
              << std::endl;
}

void test_thread()
{
    boost::thread thrd(&hello);
    thrd.join();
}

boost::mutex io_mutex;

struct count
{
    count(int id) : id(id) {}

    void operator()()
    {
        for (int i = 0; i < 10; ++i)
        {
            boost::mutex::scoped_lock
                lock(io_mutex);
            std::cout << id << ": "
                      << i << std::endl;
        }
    }
    int id;
};
void test_operator()
{
    boost::thread thrd1(count(1));
    boost::thread thrd2(count(2));
    thrd1.join();
    thrd2.join();
}

int main()
{
    test_error();
    test_thread();
    test_operator();
}