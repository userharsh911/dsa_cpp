#include <iostream>
using namespace std;

int sumOfNnumber(int n){
    if(n<1) return 0;
    int x = sumOfNnumber(n-1);
    return n+x;

}

int main(){
    cout<<sumOfNnumber(10);
    return 0;
}