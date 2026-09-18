#include <iostream>
#include <vector>
using namespace std;

void subsequence(vector<int>& v, vector<vector<int>>& subsequenceSet, vector<int>& set, int pointer = 0){

    if(pointer == v.size()){
        subsequenceSet.push_back(set);
        set.pop_back();
        return;
    }
    set.push_back(v[pointer]);
    subsequence(v, subsequenceSet, set, pointer + 1);
    // set.pop_back();
    subsequence(v, subsequenceSet, set, pointer + 1);
}

int main(){
    vector<int> v {1,2,3};
    vector<vector<int>> set;
    vector<int> c;
    subsequence(v, set, c);

    for(vector<int> v : set){
        for(int n : v) cout<<n<<" ";
        cout<<endl;
    }
    return 0;
}