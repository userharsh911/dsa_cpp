#include <iostream>
#include <string>
#include <vector>
using namespace std;

void sort_string(string& s){
    vector<int> alphabets(26,0);
    for(char c : s) alphabets[c - 'a']++;
    s.clear();
    for(int i = 0;i < alphabets.size();i++){
        char c = i + 97;
        for(int j = 1;j<=alphabets[i];j++) s.push_back(c);
    }
}

int main(){
    string s =  "bcdcatyadwwe";
    sort_string(s);
    cout<<s<<endl;

    vector<string> ones {"I","II","III","IV","V","VI","VII","VIII","IX"};
    return 0;
}