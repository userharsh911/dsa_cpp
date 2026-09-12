#include <iostream>
#include <vector>
using namespace std;

void subsequenceSum(vector<int>& v, int& answer, int pointer = -1, int sum = 0, bool is = false){
    if(is) sum += v[pointer];

    if(pointer == v.size() - 1){
        answer += sum;
        return;
    }

    subsequenceSum(v, answer, pointer + 1, sum, true);
    subsequenceSum(v, answer, pointer + 1, sum, false);
}

int main(){
    vector<int> v {3,4,5};
    int answer = 0;
    subsequenceSum(v, answer);

    cout<<answer;
    return 0;
}