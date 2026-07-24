#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> threeSum(vector<int>& nums,int k){
    sort(nums.begin(),nums.end());
    for(int i=0;i<nums.size()-2;i++){
        int start = i+1;
        int end = nums.size()-1;
        while(start<end){
            if(nums[i] + nums[start] + nums[end] == k) return vector<int> {nums[i],nums[start],nums[end]};
            else if(nums[i] + nums[start] + nums[end] < k) start++;
            else end--;
        }
    }
    return vector<int> {-1,-1,-1};
}

int main(){
    vector<int> nums {1,4,6,8,10,45};
    int k = 51;
    vector<int> vec = threeSum(nums,k);

    for(int v : vec)
        cout<<v<<" ";

    return 0;
}
