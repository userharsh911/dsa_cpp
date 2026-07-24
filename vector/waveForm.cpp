#include <iostream>
#include <vector>
using namespace std;

int main(){
    
    vector<vector<int>> matrix {{30,60,40,20},{72,82,11,15},{99,34,24,14},{17,18,55,28},{16,87,99,78}};
    vector<vector<int>> wave_matrix;
    
    for(int i=0;i<matrix[0].size();i++){
        vector<int> v;
        for(int j=0;j<matrix.size();j++){
            if(i%2==0) v.push_back(matrix[j][i]);
            else v.push_back(matrix[(matrix.size()-1)-j][i]);
        }
        wave_matrix.push_back(v);
    }
    
    for(vector<int> v : wave_matrix){
        cout<<"{";
        for(int v : v){
            cout<<v<<" ";
        }
        cout<<"},"<<endl;
    }

    return 0;
}
