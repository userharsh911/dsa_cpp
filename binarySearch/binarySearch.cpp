#include <iostream>
using namespace std;

int main(){
    int arr[] {1,2,3,4,5,6,7,8,9};
    int size = sizeof(arr)/sizeof(arr[0]);
    int startIndex = 0;
    int endIndex = size-1;
    int search = 9;
    int is = 0;
    while(size>0 && arr[startIndex]!=search){
        size /=2;
        int mid = ((endIndex-startIndex)/2)+startIndex;
        if(arr[mid]==search) startIndex = mid;
        else if(arr[mid]>search) endIndex = mid-1;
        else startIndex = mid+1;
        if(arr[startIndex]==search){
            is = 1;
            break;
        }
    }

    cout<<startIndex;


    return 0;
}
