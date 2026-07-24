#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
  
// only applicable for nxn matrix as we transpose i+j and in spaceO(1)

void rotate_matrix_90_anti_clockwise(vector<vector<int>>& matrix){
    for(vector<int> v : matrix) reverse(v.begin(),v.end());

    // transpose matrix 

    for(int i=0;i<matrix.size();i++){
        for(int j=i+1;j<matrix.size();j++) swap(matrix[i][j],matrix[j][i]);
    }
}

int main(){
    vector<vector<int>> matrix = {{11,22,33,44},{55,66,77,88},{99,10,11,12},{13,14,15,16}};

    rotate_matrix_90_anti_clockwise(matrix);

    for(vector<int> v : matrix){
        for(int v : v)
            cout<<v<<" ";
        cout<<endl;
    }

    return 0;
}