#include <iostream>
using namespace std;

int main(){

    int arr[] = {1,2,3,4,5,6};
    int n = 6;
    for(int i=0;i<n;i++){
        int is = 1;
        for(int j=0;j<(n-1)-i;j++){
            if(arr[j]>arr[j+1]){
                is = 0;
                swap(arr[j],arr[j+1]);
            }
        }
        if(is==1) break;

    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}