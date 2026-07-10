#include <iostream>
using namespace std;

int main(){
    int n = 5;
    for(int i=n;i>=1;i--){
        for(int j=n-i;j>=1;j--){
            cout<<"  ";
        }
        for(int k=1;k<=i;k++){
            cout<<k<<" ";
        }
        for(int l=1;l<i;l++){
            cout<<l<<" ";
        }
        cout<<endl;
    }

    return 0; 
}