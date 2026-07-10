#include <iostream>
using namespace std;

int main(){
    int n = 4;
    for(int i=n;i>=1;i--){
        for(int k=1;k<=n*2;k++){
            if(k<=i || ((n*2)-i)<k){
                cout<<"* ";
            }else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    for(int i=1;i<=n;i++){
        for(int k=1;k<=n*2;k++){
            if(k<=i || ((n*2)-i)<k){
                cout<<"* ";
            }else{
                cout<<"  ";
            }
        }
        cout<<endl; 
    }

    return 0;
}