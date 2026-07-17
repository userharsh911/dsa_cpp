#include <iostream>
using namespace std;

int main(){
    int arr[] = {10,8,2,3,1,4};
    int size = 6;
    for(int i = 0;i<size-1;i++){
        int minIndex = i; 
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[minIndex]){
                minIndex = j;
            }
        }
        arr[i] = arr[minIndex] - arr[i];
        arr[minIndex] = arr[minIndex] - arr[i];
        arr[i] = arr[i] + arr[minIndex];
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}