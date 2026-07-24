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

//  binary exponention 

int power(int base, int n){
    int ans = 1;
    while(base>0){
        if(base%2==1) ans *= n; 
        n *= n;
        base /= 2;
    }
    return ans;
}

bool isArmStrong(int n){
    int v = n;
    int ans = 0;
    int digit = count_digit(n);
    while(n>0){
        int rem = n%10;
        n/=10;
        ans+=power(digit,rem);
    }
    if(v==ans) return true;
    return false;
}

int main(){
    cout<<isArmStrong(153)<<endl;
    return 0;
}