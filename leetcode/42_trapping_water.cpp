#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> height {4,2,0,3,2,6,2,3};
    vector<int> rMax(height.size());
    rMax[rMax.size()-1] = height[height.size()-1];
    vector<int> lMax(height.size());
    lMax[0] = height[0];

    for(int i = height.size()-2;i>=0;i--) rMax[i] = max(height[i],rMax[i+1]);

    for(int i=1;i<height.size();i++) lMax[i] = max(height[i],lMax[i-1]);

    int count = 0;

    for(int i=1;i<height.size()-1;i++){
        if(height[i]<lMax[i-1] && height[i]< rMax[i+1]) count += min(lMax[i-1],rMax[i+1])-height[i];
    }

    cout<<count;

    return 0;
}