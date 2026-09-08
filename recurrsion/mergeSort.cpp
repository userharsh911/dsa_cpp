#include <iostream>
using namespace std;

// O(NLOG(N)) time complexity 

void mergeSortedArray(int arr[], int start, int mid, int end){
    int temp[end - start + 1];
    int left = start;
    int right = mid + 1;
    int index = 0;
    while( left <= mid && right <=end){
        if(arr[left] <= arr[right]){
            temp[index] = arr[left];
            index++, left++;
        }else{
            temp[index] = arr[right];
            index++, right++;
        }
    }
    while(left <= mid){
        temp[index] = arr[left];
        index++, left++;
    }
    while(right <= end){
        temp[index] = arr[right];
        index++, right++;
    }

    index = 0;

    while(start <= end) arr[start] = temp[index], start++, index++;

}

void mergeSort(int arr[], int start, int end){
    int mid = start + (end - start) / 2;;
    if(start == end) return;

    // cout<<start;

    mergeSort(arr, start, mid);
    mergeSort(arr, mid + 1, end);

    mergeSortedArray(arr, start, mid, end);
}

int main(){
    int arr[] = {5, 4, 3, 2, 1};
    int size = 5;  

    mergeSort(arr, 0, size - 1);

    for(int i = 0; i < size; i++)
        cout<<arr[i]<<" ";

    return 0;
}