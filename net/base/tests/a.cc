#include <iostream>
#include <utility>
#include <boost/type_index.hpp>
#include <move.h>
using namespace std;
using namespace boost::typeindex;


template <typename T>
void f(T &t)
{
    cout << " & " << endl;
}
template <typename T>
void f(T &&t)
{
    cout << " && " << endl;
}

template <typename T>
void PrintType(T &&param)
{
    // 利用Boost库打印模板推导出来的 T 类型
    cout << "T type：" << type_id_with_cvr<T>().pretty_name() << endl;

    // 利用Boost库打印形参的类型
    cout << "param type:" << type_id_with_cvr<decltype(param)>().pretty_name() << endl;
    f(std::forward<T&>(param));
    // f(param);
}

int main()
{

    // int i = 1;
    // int a;
    // int &b = a;
    // int &&c = 1;
    // int &&d = std::move(1);
    // std::cout << std::boolalpha;
    // std::cout << std::is_same<decltype(std::forward<int>(1)), int &&>::value << std::endl;
    // std::cout << std::is_same<decltype(std::forward<int>(i)), int &&>::value << std::endl;
    // std::cout << std::is_same<decltype(std::forward<int &>(a)), int &>::value << std::endl;
    // std::cout << std::is_same<decltype(std::forward<int &>(b)), int &>::value << std::endl;
    // std::cout << std::is_same<decltype(std::forward<int &&>(b)), int &&>::value << std::endl;
    // std::cout << std::is_same<decltype(std::forward<int &&>(c)), int &&>::value << std::endl;
    // func(std::forward<int>(i));
    // func(std::forward<int>(c));

    int a = 0;    // 左值
    PrintType(a); // 传入左值

    int &lvalue_refence_a = a;   // 左值引用
    PrintType(lvalue_refence_a); // 传入左值引用
    int &&c = 1;
    PrintType(c); // 传入右值
  
    // f(1);
    // int a = 1;
    // f(a);
    // f(int(1));
}