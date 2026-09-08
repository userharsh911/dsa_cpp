#include <iostream>
using namespace std;

bool binarySearchRecurrsion(int arr[], int size, int n, int start = 0, int end = 0){
    if (start > end) return 0;

    int mid = start + ((end - start) / 2);

    if(arr[mid] == n) return 1;
    else if(arr[mid] < n) return binarySearchRecurrsion(arr, size, n, mid + 1, end);
    return binarySearchRecurrsion(arr, size, n, start, mid - 1);
}

int main(){
    int arr[] = {1,2,3,4,5};
    int size = 5;
    cout<<binarySearchRecurrsion(arr, 5, 5, 0, size - 1); // size - 1 -> index

    return 0;
}