#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> v {4,3,2,7};
    vector<vector<int>> subArray;
    int k = 1;
    int n = v.size()-(k-1);

    for(int i=0;i<n;i++){
        vector<int> vec;
        for(int j=0;j<k;j++){
            vec.push_back(v[i+j]);
        }
        subArray.push_back(vec);
    }
    cout<<"{";
    for(vector<int> v : subArray){
        cout<<"{";
        for(int v : v){
            cout<<v<<" ";
        }
        cout<<"},";
    }
    cout<<"}";

    return 0;
}
