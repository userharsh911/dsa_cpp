#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void permutation(vector<int>& v, vector<vector<int>>& permutationSet, int pointer = 0){
    if(pointer == v.size()){
        permutationSet.push_back(v);
        return;
    }
    for(int i = pointer; i < v.size(); i++){
        swap(v[pointer], v[i]);
        permutation(v, permutationSet, pointer + 1);
        swap(v[pointer], v[i]);
    }
}

int main(){
    vector<int> v {1, 2, 3};
    vector<vector<int>> permutationSet;
    permutation(v, permutationSet);

    for(vector<int> v : permutationSet){
        for(int d : v) cout<<d<<" ";
        cout<<endl;
    }
    return 0;
}