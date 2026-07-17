#include <iostream>
using namespace std;

int main(){

    int arr[]  {7,4,10,7,8,9,3,9,1,3};
    int secondMax = arr[0];
    int max = arr[0];
    for(int i=1;i<sizeof(arr)/sizeof(arr[0]);i++){
        if(arr[i]>max){
            secondMax = max;
            max = arr[i];
        }else if(arr[i]>secondMax && arr[i]<max){
            secondMax = arr[i];
        }
    }
    cout<<secondMax;
    return 0;
}