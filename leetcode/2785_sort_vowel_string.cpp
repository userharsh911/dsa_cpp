#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string sort_vowel(string s){
    vector<int> pos;
    string vowel;
    for(int i = 0;i < s.size();i++){
        int ascii = s[i];
        if(ascii == 65 || ascii == 69 || ascii == 73 || ascii == 79 || ascii == 85 || ascii == 97 || ascii == 101 || ascii == 105 || ascii == 111 || ascii == 117){
            vowel.push_back(s[i]);
            pos.push_back(i);
        }
    }

    sort(vowel.begin(),vowel.end());
    for(int i = 0;i < pos.size();i++) s[pos[i]] = vowel[i];

    return s;

}

int main(){
    string s = "leetcode";
    cout<<sort_vowel(s);

    return 0;
}