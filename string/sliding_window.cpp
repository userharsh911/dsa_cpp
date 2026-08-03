#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int lengthOfLongestSubstring(string s){
    vector<bool> characters(256,false);
    int length = 0;
    int l = 0;
    int r = 0;
    while(r < s.size()){
        char c = s[r];
        while(characters[int(c)]){
            characters[int(s[l])] = false;
            l++;
        }
        characters[int(c)] = true;
        r++;
        if(length < r - l) length = r - l;
    }
    return length;
}

int main(){
    string s = "abcabcbb";
    cout<<lengthOfLongestSubstring(s);

    return 0;
}