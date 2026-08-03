#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string shortestPalindrome(string s){
    string reverse_string = s;
    reverse(reverse_string.begin(), reverse_string.end());
    vector<int> lps(s.size(), 0);
    
    int l = 0;
    int r = 1;

    while(r < s.size()){
        if(s[l] != s[r]){
            if(l) l = lps[l - 1];
            else r++;

        }else{
            lps[r] = l + 1;
            r++, l++;
        }
    }

    l = 0;
    r = 0;
    int value = 0;
    while(r < reverse_string.size()){
        if(s[l] != reverse_string[r]){
            if(l) l = lps[l - 1];
            else r++;

        }else{
            value = l + 1;
            r++, l++;
        }
    }
    s = reverse_string.substr(0, reverse_string.size() - value) + s;

    return s;
}

int main(){
    string s = "abcd";
    cout<<shortestPalindrome(s);
    return 0;
}