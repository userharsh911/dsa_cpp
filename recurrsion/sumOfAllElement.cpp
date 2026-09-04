#include <iostream>
using namespace std;

int sum(int arr[], int n, int index = 0){
    if(index == n - 1) return arr[index];
    return arr[index] + sum(arr, n, index + 1);
}

int main(){
    int arr[5] = {22,33,44,55,66};
    cout<<sum(arr, 5);


    // cout<<arr;

    return 0;
}