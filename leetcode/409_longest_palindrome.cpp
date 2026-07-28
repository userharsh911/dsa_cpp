#include <iostream>
#include <string>
#include <vector>
using namespace std;

int longestPalindrome(string s){
    vector<int> alphabets(52,0);
    for(char c : s){
        if(int(c)>=97) alphabets[c - 'a']++;
        else alphabets[(c - 'A')+26]++;
    }

    int count = 0;

    for(int d : alphabets){
        if(d%2==0) count += d;
        else count += d-1;
    }
    for(int d : alphabets){
        if(d % 2==1){
            count++;
            break;
        }
    }
    return count;
}

int main(){
    string s = "abccccdd";
    cout<<longestPalindrome(s);


    return 0;
}