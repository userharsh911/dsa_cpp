#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

// only works if the subarray exists in last

int minSubArrayLen(vector<int> nums, int target){
    vector<long long> prefixSum;
    prefixSum.push_back(nums[0]);

    for(int i = 1; i < nums.size(); i++) prefixSum.push_back(nums[i] + prefixSum[i - 1]);

    int i = 1;
    for(; i < prefixSum.size(); i++){
        long long val = prefixSum[(prefixSum.size() - 1)] - prefixSum[(prefixSum.size() - 1) - i];
        if(val >= target) return i;
    }
    return 0;
}

int main(){
    vector<int> nums {2,3,8,2,1,1};
    int target = 8;
    cout<<minSubArrayLen(nums, target);
    return 0;
}