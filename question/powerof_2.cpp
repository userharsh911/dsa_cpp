#include <iostream>
using namespace std;

int main(){
    int num = 32;

    while(num>1 && num%2==0){
        num/=2;
    }
    
    switch (num)
    {
    case 1:
        cout<<"Yes"; // if its in power of 2
        break;
    
    default:
        cout<<"NO"; // if its not in power of 2
        break;
    }


    return 0;
}