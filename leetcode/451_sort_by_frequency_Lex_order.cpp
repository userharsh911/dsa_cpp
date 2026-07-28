#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string sort_string_by_freq(string s){
    vector<int> frequncyArray(62,0);
    for(int i = 0;i < frequncyArray.size();i++) frequncyArray[(frequncyArray.size()-1)-i] = i;
    for(char c : s){
        if(int(c) >= 97 && int(c)<=122) frequncyArray[(c - 'a')+36]+=62;
        else if(int(c) >= 65 && int(c)<=90) frequncyArray[(c - 'A')+10]+=62;
        else if(int(c) >= 48 && int(c)<=57) frequncyArray[c - '0']+=62;
    }

    s.clear();
    sort(frequncyArray.rbegin(),frequncyArray.rend());
    for(int i = 0;i < frequncyArray.size();i++){
        int occurance = frequncyArray[i]/62;
        if(occurance==0) continue;
        int value = frequncyArray[i]%62;
        if(value >= 52) value = (61 - value) + 48;
        else if(value >= 26) value = (51 - value) + 65;
        else value = (25 - value) + 97;
        for(int j = 1;j <= occurance;j++) s.push_back(value);
    }
    return s;
}

int main(){
    string s = "AaaajJKldfn000Kninc";
    cout<<sort_string_by_freq(s);
    return 0;
}