#include <iostream>
#include "broc_out/pg633/net_core/proto/person.pb.h"
using namespace std;


int main(){
    Person person;
    person.set_name("broc");
    person.set_id(1234);
    person.set_email("broc@baidu.com");
    cout<<"asd"<<endl;
    // cout<<person<<endl;
    // cout<<person.get_name()<<endl;
}
