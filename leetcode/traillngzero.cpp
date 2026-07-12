#include <iostream>
using namespace std;

int main()
{
    int n = 200;
    int expo = 5;
    int num = 5;
    int zeros = 0;
    while (n / num ){
        zeros += n / num;
        num *= expo;
    }
    
    cout<<zeros;
}