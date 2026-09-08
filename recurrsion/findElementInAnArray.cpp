#include <iostream>
using namespace std;

bool findElement(int arr[], int size, int n, int index = 0){
    if(index == size) return 0;
    if(arr[index] == n) return 1;
    return findElement(arr, size, n, index + 1);
}

int main(){
    int arr[5] = {1,2,3,6,5};
    cout<<findElement(arr, 5, 4);
    return 0;
}