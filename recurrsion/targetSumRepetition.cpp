#include <iostream>
#include <vector>
using namespace std;

void targetSum(vector<int>& v, int sum, int& count, int pointer = 0){
    if(sum == 0) count++;
    if(sum <= 0 || pointer == v.size()) return;
    
    targetSum(v, sum, count, pointer + 1);
    targetSum(v, sum - v[pointer], count, pointer);
}

int main(){
    vector<int> v {2, 3, 4};
    int sum = 6;
    int count = 0;
    
    targetSum(v, sum, count);
    cout<<count;
    return 0;
}