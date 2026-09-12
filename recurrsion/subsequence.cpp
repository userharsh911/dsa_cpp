#include <iostream>
#include <vector>
using namespace std;

void subsequence(vector<int>& v, vector<vector<int>>& subsequenceSet, vector<int>& set, int pointer = -1, bool is = false){
    if(is) set.push_back(v[pointer]);

    if(pointer == v.size() - 1){
        subsequenceSet.push_back(set);
        set.pop_back();
        return;
    }

    subsequence(v, subsequenceSet, set, pointer + 1, true);
    subsequence(v, subsequenceSet, set, pointer + 1, false);
}

int main(){
    vector<int> v {3,4,5};
    vector<vector<int>> set;
    vector<int> c;
    subsequence(v, set, c);

    for(vector<int> v : set){
        for(int n : v) cout<<n<<" ";
        cout<<endl;
    }
    return 0;
}