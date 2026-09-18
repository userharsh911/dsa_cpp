#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int waysToAchieveSum(vector<int>& v, int& target){
    if(target < 0) return 0;
    if(target == 0) return 1;
    int count = 0;
    for(int i = 0; i < v.size(); i++){
        target -= v[i];
        count += waysToAchieveSum(v, target);
        target += v[i];
    }
    return count;
}

int main(){
    vector<int> v {1, 5, 6};
    int target = 7;
    cout<<waysToAchieveSum(v, target);
    return 0;
}