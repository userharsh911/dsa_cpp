#include <iostream>
using namespace std;

void fun(char* s){
    cout<<sizeof(s);
}

int main(){

    char s[] = "Harsh";
    if(s[0]=='H'){
        cout<<"equal"<<endl;
    }
    cout<<sizeof(s)<<endl;
    fun(s);

    return 0;
}