#include <iostream>
using namespace std;

void printEven(int n){
    if(n % 2 == 1) n -= 1;
    if(n == 0) return;
    printEven(n - 2);
    cout<<n<<" ";
}

int main(){

    printEven(101);

    return 0;
}