#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int maxArea(vector<int>& height){
    int max_area = 0;
    int start = 0;
    int end = height.size()-1;
    while(start < end){
        int val = (end - start) * min(height[end],height[start]);
        if(max_area < val) max_area = val;
        if(height[start] <= height[end]) start++;
        else end--;
    }
    return max_area;
}

int main(){
    vector<int> height {1,8,6,2,8,4,8,3,7};
    cout<<maxArea(height);
    return 0;
}