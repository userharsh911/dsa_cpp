#include <iostream>
using namespace std;

int main(){
    int arr[7] = {3,4,1,5,6,73,3};
    int n = 7;
    int prefix[8] = {0};
    for(int i=1;i<=n;i++){
        prefix[i] = prefix[i-1]+arr[i-1];
    }
    // for(int i = 0;i<=7;i++){
    //     cout<< prefix[i]<<" ";
    // } 

    auto rangeSum = [&](int s, int e){
        return prefix[e]-prefix[s-1];
    };

    cout << rangeSum(3,6);

    return 0;
}