#include <iostream>
using namespace std;

int main(){
    int num = 41;
    int ans = 0;
    int i = 0;
    while(num>9){
        while(num>0){
            i++;
            ans += num%10;
            num /= 10;
        }
        num = ans;
        ans = 0;
    }

    cout<<num<<" "<<i;

    return 0;
}