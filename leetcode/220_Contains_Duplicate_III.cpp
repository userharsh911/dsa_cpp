#include <iostream>
#include <vector>
using namespace std;

bool containsNearbyAlmostDuplicate(vector<int>& nums, int indexDiff, int valueDiff) {
    int l = 0;
    int r = 1;
    while(r < nums.size() && l < r){
        int abs_index_diff = r - l;
        if(l == r - 1){
            l = 0;
            r++;
        }else l++;
        if(abs_index_diff <= indexDiff){
            int abs_value_diff = abs(nums[r] - nums[l]);
            if(abs_value_diff <= valueDiff) return true;
            r++;
        }else l++;
    }
    return false;
}

int main(){
    vector<int> nums {1,2,2,3,4,5};
    int indexDiff = 3;
    int valueDiff = 0;
    cout<<containsNearbyAlmostDuplicate(nums, indexDiff, valueDiff)<<endl;
    cout<<abs(-1);
    return 0;
}


// <---------------------------------TC -> O(n^2) but working--------------------------------->

// #include <iostream>
// #include <vector>
// using namespace std;

// bool containsNearbyAlmostDuplicate(vector<int>& nums, int indexDiff, int valueDiff) {
//     int l = 0;
//     int r = 1;
//     while(r < nums.size() && l < r){        
//         int abs_index_diff = r - l;
//         if(abs_index_diff <= indexDiff){
//             int abs_value_diff = abs(nums[r] - nums[l]);
//             if(abs_value_diff <= valueDiff) return true;
//         }
//         if(l == r - 1){
//             l = 0;
//             r++;
//         }else l++;
//     }
//     return false;
// }

// int main(){
//     vector<int> nums {8,7,15,1,6,1,9,15};
//     int indexDiff = 1;
//     int valueDiff = 3;
//     cout<<containsNearbyAlmostDuplicate(nums, indexDiff, valueDiff);
//     return 0;
// }