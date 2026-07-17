#include <iostream>
using namespace std;

int main(){
    int arr[] {7,4,2,1,5};
    int size = 5;

    for(int i=1;i<size;i++){
        for(int j=i;j>0;j--){
            if(arr[j]<arr[j-1]){
                int temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
            }
            else break;
        }
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}