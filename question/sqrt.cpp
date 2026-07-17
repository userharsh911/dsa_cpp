#include <iostream>
#include <string>
using namespace std;

int main(){
    float num = 32;
    int ans = 0;
    while(num>1){
        num /= 2.0;
        ans++;
    }

    cout<<ans<<num<<endl;


    string c = "5";

    cout<<c[0]-'0';

    return 0;
}