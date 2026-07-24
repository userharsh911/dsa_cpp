#include <iostream>
#include <vector>
using namespace std;

int main(){ 
    vector<int> vec {3,4,-2,5,8,20,-10,8};
    int total_sum = 0;
    vector<int> prefixSum;
    prefixSum.push_back(vec[0]);
    for(int n : vec)
        total_sum += n;

    for(int i=1;i<vec.size();i++) prefixSum.push_back(prefixSum[i-1]+vec[i]);

    for(int n : prefixSum){
        if(n==total_sum-n){
            cout<<n;
            break;
        }
    }


    return 0;
}