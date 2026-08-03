#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> findAnagrams(string s, string p){
    vector<int> alphabets(26,0);
    vector<int> output;
    for(char c : p) alphabets[c - 'a']++;
    int l = 0;
    int r = 0;
    int diff = p.size();
    while(r <= s.size()){
        if(diff){
            if(r < s.size() && alphabets[s[r] - 'a']){
                alphabets[s[r] - 'a']--;
                r++, diff--;
            }else if(l == r) l++, r++;
            else{
                alphabets[s[l] - 'a']++;
                diff++, l++;

            }
        }else{
            output.push_back(l);
            alphabets[s[l] - 'a']++;
            diff++, l++;
        }
    }
    return output;
}

int main(){
    string s = "cbaebabacd";
    string p = "abc";

    vector<int> v = findAnagrams(s, p);

    for(int d : v) cout<<d<<" ";

    return 0;
}