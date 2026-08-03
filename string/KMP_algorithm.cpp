#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int longest_prefix_suffix(string s){
    vector<int> lps(s.size(),0);
    int prefix = 0;
    int suffix = 1;
    while(suffix < s.size()){
        if(s[prefix] != s[suffix]){
            if(prefix) prefix = lps[prefix - 1];
            else suffix++;
        }else{
            lps[suffix] = prefix + 1;
            prefix++;
            suffix++;
        }
    }
    return lps.back();
}

int main(){
    string s = "ABCABDABCABCABD";
    cout<<longest_prefix_suffix(s);
    return 0;
}
