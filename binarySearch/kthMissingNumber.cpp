#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> arr {1,2,3,4};
    vector<int> check;
    int k = 2;
    for(int i=0;i<arr.size();i++){
        check.push_back(arr[i]-(i+1));
    }

    int start = 0;
    int end = check.size()-1;
    while(start<=end){
        int mid = start+(end-start)/2;
        if(check[mid]<k) start = mid+1;
        else end = mid-1;
    }
    cout<<start<<" "<<end<<endl;
    if(start==arr.size()){
        cout<<arr[end]+(k-check[end]);
    }else{
        cout<<arr[start]+((k-1)-check[start]);
    }


    
    return 0;
}