#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string findAnagrams(string s, string t){
    if(s.size() < t.size()) return "";
    else if(s == t) return s;
    vector<int> alphabets(256);
    string output;
    int range = 0;
    int start = 0;
    for(char c : t) alphabets[c]++;
    int l = 0;
    int r = 0;
    int diff = t.size();
    while(r <= s.size()){
        if(diff){
            if(alphabets[s[r]] > 0) diff--;
            alphabets[s[r]]--;
            r++;
        }else{
            if((r - l) < range || range == 0){
                range = r - l;
                start = l;
            }

            if(alphabets[s[l]] >= 0)  diff++;
            alphabets[s[l]]++;
            l++;
        }
    }
    if(range) output = s.substr(start, range);
    return output;
}

int main(){
    string s = "cabwefgewcwaefgcf";
    string p = "cae";

    cout<<findAnagrams(s, p);


    return 0;
}