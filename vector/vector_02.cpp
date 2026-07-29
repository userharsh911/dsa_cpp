#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

string sorting_sentence(string s){
    vector<string> sentence(9);
    string word;
    for(char c : s){
        if(int(c) == 32) continue;
        else if(int(c)>48 && int(c) < 58){
            sentence[(c - '1')] = word + " ";
            word.clear();
        }else word.push_back(c);
    }
    s.clear();
    for(string w : sentence) s.append(w);
    s.pop_back();
    return s;
}

int main(){
    string s = "Myself2 Me1 I4 and3";

    cout<<sorting_sentence(s);
    return 0;
}