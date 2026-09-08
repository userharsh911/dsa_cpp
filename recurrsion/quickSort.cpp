#include <iostream>
#include <vector>
using namespace std;

void quickSort(vector<int>& arr, int start, int end){
    if(start >= end) return;

    vector<int> temp;
    int pivotElement = arr[end];
    int index = start;
    while(index < end){
        if(arr[index] <= pivotElement) temp.push_back(arr[index]);
        index++;
    }
    temp.push_back(pivotElement);
    int pivotIndex = start + (temp.size() - 1);

    index = start;
    while(index < end){
        if(arr[index] > pivotElement) temp.push_back(arr[index]);
        index++;
    }
    index = start;
    for(int v : temp) arr[index] = v, index++;

    quickSort(arr, start, pivotIndex - 1);
    quickSort(arr, pivotIndex + 1, end);    
}

int main(){
    vector<int> arr {5, 4, 3, 2, 1};

    quickSort(arr, 0, arr.size() - 1);

    for(auto n : arr) cout<<n<<" ";

    return 0;
}