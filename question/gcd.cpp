#include <iostream>
using namespace std;

int gcd(int den, int num){
    while(den>0){
        int rem = num%den;
        if(rem==0) return den;
        num = den;
        den = rem;
    }
    return den;
}

int main(){

    cout<<gcd(3,15);

    return 0;
}