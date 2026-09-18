#include <iostream>
#include <vector>
using namespace std;

void targetSum(vector<int>& v, int& sum, int& target, bool& answer, bool is = false, int pointer = -1){
    if(is) sum += v[pointer];

    if(pointer == v.size() - 1){
        if(target == sum) answer = true;
        else if(is) sum -= v[pointer];
        return;
    }
    targetSum(v, sum, target, answer, true, pointer + 1);
    if(answer) return;
    targetSum(v, sum, target, answer, false, pointer + 1);
    if(is) sum -= v[pointer];
}

int main(){
    vector<int> v {3, 4, 5};
    int target = 15;
    int sum = 0;
    bool answer = false;
    
    targetSum(v, sum, target, answer);
    cout<<answer;
    return 0;
}