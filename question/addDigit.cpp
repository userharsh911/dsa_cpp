#include <iostream>
using namespace std;

int main(){
    int digit = 12345;

    int sum = 0;

    while(digit>0){
        int rem = digit%10;
        digit/=10;
        sum +=rem;
    }

    cout<<sum;


    return 0;
}