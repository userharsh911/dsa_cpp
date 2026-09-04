#include <iostream>
using namespace std;

int minimum(int arr[], int n, int index = 0){
    if(index == n - 1) return arr[index];
    return min(arr[index], minimum(arr, n, index + 1));
}

int main(){
    int arr[5] = {22,33,4,55,66};
    cout<<minimum(arr, 5);


    // cout<<arr;

    return 0;
}