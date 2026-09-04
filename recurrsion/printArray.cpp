#include <iostream>
using namespace std;

void printArr(int arr[], int n, int index = 0){
    if(index == n) return;
   cout<<arr[index]<<" ";
   printArr(arr, n, index + 1); 
}

int main(){
    int arr[5] = {22,33,44,55,66};
    printArr(arr, 5);


    // cout<<arr;

    return 0;
}