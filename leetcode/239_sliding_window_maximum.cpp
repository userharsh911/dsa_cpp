#include <iostream>
#include <vector>
using namespace std;

vector<int> maxSlidingWindow(vector<int>& nums, int k) {
    if(k == 1) return nums;
    vector<int> output;
    int l = 0;
    int r = 0;
    while(r < nums.size()){
        int window_size = (r - l) + 1;
        int big = INT32_MIN;
        if(window_size==k){
            output.push_back(max(big, nums[r]));
            r++, l++;
        }else if(window_size < k){
            big = max(nums[r], big);
            r++;
        }
        else{
            l++;
        }
            
    }
}

int main(){
    vector<int> nums {1,3,-1,-3,5,3,6,7};
    int k = 1;
    maxSlidingWindow(nums, k);


    vector<int> check {1,2,3,4};
    check.clear();
    cout<<check.size();

    return 0;
}
