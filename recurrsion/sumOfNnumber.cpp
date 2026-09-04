#include <iostream>
using namespace std;

int printN(int n){
    if(n == 1) return 1;
    return n + printN(n - 1);
}

int main(){
    cout<<printN(10);
    return 0;
}