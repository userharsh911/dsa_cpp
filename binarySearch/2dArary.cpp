#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool binarySearch(vector<vector<int>>& matrix,int target){
    int start = 0;
    int end = matrix.size()-1;
    while(start<=end){
        int mid = start+(end-start)/2;
        if(matrix[mid][0]<=target && matrix[mid][(matrix[mid].size()-1)]>=target){
            int strt = 0;
            int nd = matrix[mid].size()-1;
            while(strt<=nd){
                int center = strt+(nd-strt)/2;
                if(matrix[mid][center]==target) return 1;
                else if(matrix[mid][center]<target) strt = center+1;
                else nd = center-1;
            }
            return 0;
        }else if(matrix[mid][0]>target) end = mid-1;
        else start = mid+1;
    }
    return 0;
}

int main(){
    vector<vector<int>> matrix {{2,6,10,14},{18,20,24,27},{29,38,47,52},{78,93,102,108},{111,200,28,300}};

    cout<<binarySearch(matrix,25);


    return 0;
}