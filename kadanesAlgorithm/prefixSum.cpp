#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v {2,3,1,2,4,3};
    vector<int>prefixSum;
    prefixSum.push_back(v[0]);
    
    for(int i = 0;i < v.size()-1;i++) prefixSum.push_back(prefixSum[i] + v[i+1]);

    for(int n:prefixSum)
        cout<<n<<" ";

    return 0;
}