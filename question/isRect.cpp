#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int b = 10;
    int c = 10;
    int d = 5;
    int count = 0;
    if((a==b && c==d) || (b==c && d==a)){
        cout<<"can form rectangle";
    }else{
        cout<<"can not form rectangle";
    }  
    
    
    return 0;    
}