#include <iostream>
using namespace std;

char capAlpha(int n){
    return char (n-32);
}

int main(){
    char c = 'b';
    cout<<capAlpha(c);
    return 0;
}