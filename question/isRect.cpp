#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    int b = 5;
    int c = 5;
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
        cout<<"can for rectangle";
    }else{
        cout<<"can not for rectangle";
    }
    
    return 0;    
}