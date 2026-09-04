#include <iostream>
#include <vector>
using namespace std;

int minSubArrayLen(int target, vector<int>& nums) {
    int len = INT32_MAX;
    int sum = nums[0];
    int l = 0;
    int r = 0;
    while(r < nums.size() && l <= r){
        if(sum >= target){
            len = min(len, (r - l) + 1);
            sum -= nums[l];
            l++;
        }else{
            r++;
            if(r < nums.size()) sum += nums[r];
        }
    }
    if(len == INT32_MAX) return 0;
    return len;
}

int main(){
    vector<int> nums {1,1,1,1,1,1,1,1,1,1,1};
    int target = 11;
    cout<<minSubArrayLen(target, nums);
    return 0;
}