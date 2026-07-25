#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool binarySearch(vector<vector<int>>& matrix,int target){
    int row = 0;
    int col = matrix[0].size()-1;
    while(row<matrix.size() && col>=0){
        if(matrix[row][col]==target) return true;
        else if(matrix[row][col]<target) row++;
        else col--;
    }
    return false;
}

int main(){
    vector<vector<int>> matrix {{4,8,15,25,60},{18,22,26,42,80},{36,40,45,68,104},{48,50,72,83,130},{70,99,114,128,170}};
    int target = 2;

    cout<<binarySearch(matrix,target);

    return 0;
}