#include <iostream>
#include <string>
using namespace std;

string longestPalindrome(string s){
    string ans;
    for(int i=0;i<s.size();i++){
        // odd case
        int l = i-1, r=i+1;
        string a;
        a.push_back(s[i]);
        while(l>=0 && r<s.size()){
            if(s[l]==s[r]) a = s.substr(l,r-l+1);
            else break;
            l--;
            r++;
        }

        if(ans.size() < a.size()) ans = a;

        // even case
        a = "";
        l = i,r=i+1;
        while(l>=0 && r<s.size()){
            if(s[l]==s[r]) a = s.substr(l,r-l+1);
            else break;
            l--;
            r++;
        }
        if(ans.size() < a.size()) ans = a;
    }
    return ans;
}

int main(){
    string s = "babad";
    cout<<longestPalindrome(s)<<endl;


    return 0;   
}