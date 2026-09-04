#include <iostream>
#include <string>
#include <vector>
using namespace std;

int repeatedStringMatch(string a, string b) {
    vector<int> lps(b.size(), 0);
    string c = a;
    int repeatation = 1;
    while(a.size() < b.size()){
        a += c;
        repeatation++;
    }
    int l = 0;
    int r = 1;
    while(r < b.size()){
        if(b[l] != b[r]){
            if(l) l = lps[l - 1];
            else r++;
        }else{
            lps[r] = l + 1;
            r++, l++;
        }
    }
    
    l = 0;
    r = 0;
    while(r < a.size() && l < b.size()){
        if(b[l] != a[r]){
            if(l) l = lps[l - 1];
            else r++;
        }else{
            r++, l++;
        }
    }
    if(l < b.size()){
        a += a;
        repeatation++;
        l = 0;
        r = 0;
        while(r < a.size()){
            if(b[l] != a[r]){
                if(l) l = lps[l - 1];
                else r++;
            }else{
                r++, l++;
            }
            
            if(l == b.size()) return repeatation;
        }
    }else if(l == b.size()) return repeatation;

    return -1;
    
}

int main(){
    string a = "abc";
    string b = "cabcabca";
    cout<<repeatedStringMatch(a, b);
    return 0;
}