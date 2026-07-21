#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> v {5,10,30,20,15};
    int m = 3;
    int start = 30; // max value of array/vector
    int end = 80; // sum of array/vector

    while(start<end){
        int mid = start+(end-start)/2;

        int page = 0;
        int count = 1;

        for(int b : v){
            page+=b;
            if(page>mid){
                page = b;
                count++;
            }
        }

        if(count<=m) end = mid;
        else start = mid+1;
    }

    cout<<end<<" "<<start;

    return 0;
}