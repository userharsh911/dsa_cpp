#include <iostream>
using namespace std;

int ref(int &n){
    return ++n;
}
int val(int n){
    return ++n;
}

int main(){
    int a = 5;
    cout<<a<<" "<<ref(a)<<endl; // pass by ref

    cout<<a<<" "<<val(a)<<endl; // pass by value
    return 0;
}