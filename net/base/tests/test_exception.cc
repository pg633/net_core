// #include "net/base/Exception.hpp"
#include <iostream>
#include <exception>

#include <string>
using std::string;

class Exception : public std::logic_error
{
 public:
  Exception(string what):std::logic_error(what){
      message_ = what;
  }
  ~Exception() noexcept override=default;

  // default copy-ctor and operator= are okay.

  const char* what() const noexcept override
  {
 
    return message_.c_str();
  }

  const char* stackTrace() const noexcept
  {
    return stack_.c_str();
  }

 private:
  string message_;
  string stack_;
};
int main()
{
    // std::string s ("123");
    // md::Exception exception(s);
    // std::cout<<exception.what()<<std::endl;
    Exception ae("123");
    std::cout << ae.what() << std::endl;

    return 0;
}
