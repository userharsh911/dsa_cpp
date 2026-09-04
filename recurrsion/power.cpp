#include <iostream>
using namespace std;

int power(int n, int x){
    if(x == 1) return n;
    return n * power(n, x - 1);
}

int main(){

    cout<<power(2, 5);

    return 0;
}