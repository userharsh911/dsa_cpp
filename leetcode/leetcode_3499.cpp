#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int maxActiveSectionsAfterTrade(string& s){
    s.insert(0,"1");
    s.push_back('1');
    int pos = 0;
    for(int i=2;i<s.size()-2;i++){
        if(s[i]=='1' && s[i-1]=='0' && s[i+1]=='0'){
            pos = i;
            break;
        }
    }
    int count = 0;
    if(pos>0){
        for(int i = pos-1;i>0;i--){
            if(s[i]=='0') s[i] = '1';
            else break;
        }
        for(int i = pos+1;i<s.size()-1;i++){
            if(s[i]=='0') s[i] = '1';
            else break;
        }
        cout<<s<<endl;
        for(int i = pos-1;i>0;i--){
            if(s[i]=='1') count++;
            else break;
        }
        for(int i = pos+1;i<s.size()-1;i++){
            if(s[i]=='1') count++;
            else break;
        }
    }else{
        int c = 0;
        int m = 0;
        for(int i=1;i<s.size()-1;i++){
            if(s[i]=='0'){
                if(m<c){
                    m = c;
                    c = 0;
                }
            }else c++;
        }
        if(c>m) return c;
        return m;
    }
    return count+1;
}

int main(){
    string str = "01";
    
    cout<<maxActiveSectionsAfterTrade(str)<<endl;
    return 0;
}