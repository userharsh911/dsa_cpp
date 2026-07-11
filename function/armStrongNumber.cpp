#include <iostream>
using namespace std;

int count_digit(int n){
    int i = 0;
    while(n>0){
        n/=10;
        i++;
    }
    return i;
}

int power(int base, int n){
    int num = 1;
    for(int i=1;i<=base/2;i++){
        num*=n;
    }
    if(base%2!=0){
        num = num*num*n;
    }else{
        num = num*num;
    }
    return num;
}

int isArmStrong(int n){
    int v = n;
    int ans = 0;
    int digit = count_digit(n);
    while(n>0){
        int rem = n%10;
        n/=10;
        ans+=power(digit,rem);
    }
    if(v==ans) return 1;
    return 0;
}

int main(){
    cout<<isArmStrong(153);
    return 0;
}