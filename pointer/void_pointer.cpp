#include <iostream>
#include <string>
using namespace std;

int main(){
    int a = 19;
    void* p = &a; // point to unknown type of variable
    // *p; // cannot dereferring the pointer as the compiler do not know the type of pointer
    // ++p; // cannot to arithmetic 
    cout<<p<<endl; // printing address that pointer p holds;

    cout<<*static_cast<int*>(p)<<endl; // convert p pointer to int*

    return 0;
}