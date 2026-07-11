#include <iostream>
using namespace std;

int main(){
    float num = 32;
    int ans = 0;
    while(num>1){
        num /= 2.0;
        ans++;
    }

    cout<<ans<<num;


    return 0;
}