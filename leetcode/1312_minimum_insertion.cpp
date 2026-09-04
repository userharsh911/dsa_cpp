#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int minInsertions(string s){
    vector<int> alphabets(26, 0);
    for(char c : s) alphabets[c - 'a']++;
    
    for(int i = 0; i < alphabets.size(); i++){
        if(alphabets[i] % 2 == 1){
            alphabets[i]--;
            break;
        }
    }

    int count = 0;

    for(int d : alphabets) if(d != 0 && d % 2 == 0) count+=d;
    
    return s.size() - count;
}

int main(){
    string s = "leetcode";
    
    cout<<minInsertions(s);
    return 0;
}