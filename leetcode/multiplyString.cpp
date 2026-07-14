#include <iostream>
#include <string>
#include <vector>
using namespace std;

string multiply(string num1, string num2)
{
    string small = num2;
        string big = num1;
        if(num2.size() > num1.size()){
            big = num2;
            small = num1;
        }

        if(small[0]=='0') return "0";

        string str(num1.size() + num2.size(), '0');

        for(int i = 1; i <= small.size(); i++){
            int carry = 0;
            int j;
            for(j = 1; j <= big.size(); j++){
                int v = ((small[small.size() - i] - '0') * (big[big.size() - j] - '0')) + carry + (str[(str.size()-i)-(j-1)]-'0');
                carry = v / 10;
                str[(str.size()-i)-(j-1)] = (v%10)+48;
            }

            str[(str.size()-i)-(j-1)] = carry+48;
        }
        if(str[0]=='0'){
            str.erase(0,1);
        }
        return str;
}

int main(){
    cout<<multiply("2","0");    
    return 0;
}