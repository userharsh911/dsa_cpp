#include <iostream>
using namespace std;

bool isLetterOrNumber(char c){
    string alphaNum = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxys";
    int ascii = int(c);
    int start = 0;
    int end = alphaNum.size()-1;
    while(start<=end){
        int mid = start+(end-start)/2;
        if(int(alphaNum[mid])==ascii) return true;
        else if(int(alphaNum[mid])<ascii) start = mid+1;
        else end = mid-1;
    }
    return false;
}



int main(){
    char c = 'Z';
    // cout<<isLetterOrNumber(c);
    cout<<char(int(c)+32);

    return 0;
}