#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int threeSumClosest(vector<int>& nums, int target){
    int ans = INT32_MAX;
    int min_dist = INT32_MAX;
    sort(nums.begin(),nums.end());
    for(int i = 0; i < nums.size() - 2; i++){
        int start = i+1;
        int end = nums.size()-1;
        while(start < end){
            int sum = nums[i] + nums[start] + nums[end];
            int dist = sum - target;
            if(dist < 0) dist *= -1;
            if(dist < min_dist){
                ans = sum;
                min_dist = dist;
            }
            if(sum < target) start++;
            else end--;
        }
    }
    return ans;
}

int main(){
    vector<int> nums {10,20,30,40,50,60,70,80,90};
    int target = 1;
    cout<<threeSumClosest(nums, target);
    return 0;
}