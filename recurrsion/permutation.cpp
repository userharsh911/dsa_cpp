#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void permutation(vector<int>& v, vector<int>& visited, vector<int>& temp, vector<vector<int>>& permutationSet){
    if(temp.size() == v.size()){
        permutationSet.push_back(temp);
        // temp.pop_back();
        return;
    }
    for(int i = 0; i < visited.size(); i++){
        if(visited[i] == 0){
            temp.push_back(v[i]);
            visited[i] = 1;
            permutation(v, visited, temp, permutationSet);
            visited[i] = 0;
            temp.pop_back();
        }
    }
    // temp.pop_back();
}

int main(){
    vector<int> v {1, 2, 3};
    vector<int> visited(v.size(), 0);
    vector<int> temp;
    vector<vector<int>> permutationSet;
    permutation(v, visited, temp, permutationSet);

    for(vector<int> v : permutationSet){
        for(int d : v) cout<<d<<" ";
        cout<<endl;
    }
    return 0;
}