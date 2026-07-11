#include <iostream>
using namespace std;

int main(){
    int digit = 2147483647;

    int sum = 0;

    while(digit>0){
        int rem = digit%10;
        digit/=10;
        if(sum>INT32_MAX/10 || sum<INT32_MIN/10) return 0;
        sum = (sum*10) + rem;
    }

    cout<<sum;


    return 0;
}