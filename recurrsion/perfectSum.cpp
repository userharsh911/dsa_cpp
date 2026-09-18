#include <iostream>
#include <vector>
using namespace std;

void targetSum(vector<int>& v, int& sum, int& target, int& count, bool is = false, int pointer = -1){
    if(is) sum += v[pointer];

    if(pointer == v.size() - 1){
        if(target == sum) count++;
        if(is) sum -= v[pointer];
        return;
    }
    targetSum(v, sum, target, count, true, pointer + 1);
    targetSum(v, sum, target, count, false, pointer + 1);
    if(is) sum -= v[pointer];
}

int main(){
    vector<int> v {2, 5, 6, 1};
    int target = 8;
    int sum = 0;
    int count = 0;
    
    targetSum(v, sum, target, count);
    cout<<count;
    return 0;
}

// APPROACH - 2 SAME AS FIRST, BUT IF WE WANT TO RETURN AS FUNC + FUNC OR IF WE DONT NEED A VARAIBLE TO STORE COUNT

// #include <iostream>
// #include <vector>
// using namespace std;

// int targetSum(vector<int>& v, int& sum, int& target, bool is = false, int pointer = -1){
//     if(is) sum += v[pointer];

//     if(pointer == v.size() - 1){
//         if(is) sum -= v[pointer];
//         if(target == sum) return 1;
//         return 0;
//     }
//     int ans = targetSum(v, sum, target, true, pointer + 1) +
//     targetSum(v, sum, target, false, pointer + 1);
//     if(is) sum -= v[pointer];

//     return ans;
// }

// int main(){
//     vector<int> v {2, 5, 6, 1};
//     int target = 8;
//     int sum = 0;
//     cout<<targetSum(v, sum, target);
//     return 0;
// }