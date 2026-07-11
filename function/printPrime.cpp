#include <iostream>
using namespace std;

int prime(int n){
    if(n<=2) return 0;
    int ans = 1;
    for(int i=3;i<n;i+=1){
        int j;
        for(j=(i/2)/2;j<=i/2;j++){
            if(i%j==0) break;
        }
        if(i%j!=0) ans++;
    }
    return ans;
}

int main(){
    cout<<prime(3);
    return 0;
}