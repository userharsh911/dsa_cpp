#include <iostream>
#include <vector>
using namespace std;

void subsequenceSum(vector<int>& v, int& answer, int& sum, int pointer = -1, bool is = false){
    if(is) sum += v[pointer];

    if(pointer == v.size() - 1){
        answer += sum;
        if(is) sum -= v[pointer];
        return;
    }

    subsequenceSum(v, answer, sum, pointer + 1, true);
    subsequenceSum(v, answer, sum, pointer + 1, false);
    if(is) sum -= v[pointer];
}

int main(){
    vector<int> v {3,4,5};
    int answer = 0;
    int sum = 0;
    subsequenceSum(v, answer, sum);

    cout<<answer;
    return 0;
}