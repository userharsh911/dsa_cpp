#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int b = 5;
    int c = 10;
    int d = 5;
    int count = 0;
    if(a==b || a==c || a==d){
        count++;
        if(b==c || b==d){
            count++;
        }else if(c==d){
            count++;
        }
    }

    if(count==2){
        cout<<"can form rectangle";
    }else{
        cout<<"can not form rectangle";
    }
    
    return 0;    
}