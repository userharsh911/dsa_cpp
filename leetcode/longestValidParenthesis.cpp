#include <iostream>
#include <string>
using namespace std;

int longestValidParentheses(string s) {
    int left = 0;
    int right = 0;
    int result = 0;
    for(char c : s){
        if(c == '(') left++;
        else if(c == ')') right++;

        if(left == right){
            result = max(result, left + right);
        }else if(right > left) left = 0, right = 0;
    
    }
    left = 0, right = 0;
    for(int i = s.size() - 1; i >=0; i--){
        if(s[i] == '(') left++;
        else if(s[i] == ')') right++;

        if(left == right){
            result = max(result, left + right);
        }else if(right < left) left = 0, right = 0;
    }

    return result;
}

int main(){
    string s = "()((())";
    cout<<longestValidParentheses(s);
    return 0;
}