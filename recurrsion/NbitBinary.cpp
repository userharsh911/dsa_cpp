#include <iostream>
#include <vector>
#include <string>
#include <math.h>
using namespace std;

void nBitBinary(int& n, string& temp, vector<string>& v, int pointer = 0){

    if(pointer == n){
        v.push_back(temp);
        return;
    }

    temp.push_back('1');
    nBitBinary(n, temp, v, pointer + 1);
    temp.pop_back();
    if(pointer > 0){
        int count_zeroes = 0;
        for(char c : temp)
            if(c == '0') count_zeroes++;

        if(count_zeroes < ceil(temp.size() / 2.0)){
            temp.push_back('0');
            nBitBinary(n, temp, v, pointer + 1);
            temp.pop_back();
        }
    }
}

int main(){
    int n = 3;
    string temp;
    vector<string> v;
    nBitBinary(n, temp, v);

    for(string s : v)
        cout<<s<<" ";
    

    return 0;
}