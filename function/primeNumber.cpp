#include <iostream>
using namespace std;

int prime(int n){
    if(n<2 || n%2==0) return 0;

    for(int i=3;i<=n/2;i+=1){
        if(n%i==0) return 0;
    }
    return 1;
}

int main(){
    cout<<prime(47);
    return 0;
}