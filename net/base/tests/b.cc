/*
 *  Boost库在这里已经不需要了，我们将其拿掉，可以更简洁的看清楚转发的代码实现
 */

#include <iostream>
#include <utility>
#include <boost/type_index.hpp>

// 接收左值的函数 f()
template <typename T>
void f(T &)
{
    cout << "f(T &)" << endl;
}

// 接收右值的函数f()
template <typename T>
void f(T &&)
{
    cout << "f(T &&)" << endl;
}

// 万能引用，转发接收到的参数 param
template <typename T>
void PrintType(T &&param)
{
    // f(param);  // 将参数param转发给函数 void f()
    f(std::forward<T>(param));
}

int main(int argc, char *argv[])
{
    // int a = 0;
    // PrintType(a);//传入左值
    // PrintType(int(0));//传入右值

    int a = 100;
    int &&c = int(1221);
    auto k =   exchange(a, c);

    std::cout << k << std::endl;
    std::cout << a << std::endl;
    std::cout << c << std::endl;



}