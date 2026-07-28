#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> fourSum(vector<int>& nums, int target){
    sort(nums.begin(),nums.end());
    vector<vector<int>> ans;
    for(int i = 0;i < nums.size()-3;i++){
        for(int j = i+1;j < nums.size()-2;j++){
            int start = j+1;
            int end = nums.size()-1;
            while(start < end){
                if(nums[i] + nums[j] + nums[start] + nums[end] == target){
                    vector<int> v {nums[i], nums[j], nums[start], nums[end]};
                    if(ans.back() != v) ans.push_back(v);
                    end--;
                    start++;
                }else if(nums[i] + nums[j] + nums[start] + nums[end] < target) start++;
                else end--;
                
            }
        }
    }
    return ans; 
}

int main(){
    vector<int> nums {1,0,-1,0,-2,2};
    int target = 0;

    fourSum(nums,target);

    return 0;
}