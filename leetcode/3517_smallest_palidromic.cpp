#include <iostream>
#include <string>
#include <vector>
using namespace std;

string smallestPalindrome(string s){
    vector<int> alphabets(26,0);
    for(char c : s) alphabets[c-'a']++;

    s.clear();

    for(int d : alphabets) cout<<d<<" ";
    cout<<endl;

    for(int i = 0;i < alphabets.size();i++){
        for(int j = 1;j <= alphabets[i]/2;j++) s.push_back(i+'a');
    }
    for(int i = 0;i < alphabets.size();i++){
        if(alphabets[i]%2==1){
            s.push_back(i+'a');
            break;
        }
    }

    for(int i = alphabets.size()-1;i >=0 ;i--){
        for(int j = 1;j <= alphabets[i]/2;j++) s.push_back(i+'a');
    }

    return s;

}

int main(){
    string s = "daccad";
    cout<<smallestPalindrome(s);

    return 0;
}