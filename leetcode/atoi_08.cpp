#include <iostream>
#include <string>
using namespace std;

int my_stoi(string s){
    int ans = 0;
    bool negative = false;
    for(int i = 0;i < s.size();i++){
        if( (s[i] == '-' && i == 0) || (s[i] == '-' && s[i-1] == ' ') ){
            negative = true;
            continue;
        }
        else if((s[i] == ' ' && i == 0) || (s[i] == ' ' && s[i-1] == ' ') || (s[i] == '+' && i == 0) || (s[i] == '+' && s[i-1] == ' ')) continue;
        else if(int(s[i])<48 || int(s[i])>57){
            if(negative) return ans*-1;
            return ans;
        }
        if(ans>INT32_MAX/10){
            if(negative) return INT32_MIN;
            else return INT32_MAX;
        }

        ans *= 10;
        int digit = s[i] - '0';
        if(ans>INT32_MAX-digit){
            if(negative) return INT32_MIN;
            else return INT32_MAX;
        }
        ans += digit;

    }
    if(negative) return ans*-1;
    return ans;
}

int main(){
    string s = "   -0765+ans345";
    cout<<my_stoi(s);

    // cout<<INT32_MAX<<" "<<INT32_MIN;


    return 0;
}