#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> nums {0,1,1,1,1,1,0,0,0};
    cout<<count(nums.begin(),nums.end(),0);


    return 0;
}