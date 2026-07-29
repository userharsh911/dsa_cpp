#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string add_string(string num1, string num2){
    int carry = 0;
    int n = min(num1.size(), num2.size());
    for(int i = 0; i < n; i++){
        int val = (num1[(num1.size() - 1) - i] - '0') + (num2[(num2.size() - 1) - i] - '0') + carry;
        if(num1.size() >= num2.size()) num1[(num1.size() - 1) - i] = (val % 10) + 48;
        else num2[(num2.size() - 1) - i] = (val % 10) + 48;
        carry = val / 10;
    }
    int i = 1;
    while(carry > 0){
        if(num1.size() >= num2.size()){
            int index = num1.size() - num2.size() - i;
            if(index == -1){
                string c;
                c.push_back(carry + 48);
                num1 = c.append(num1);
                carry = 0;
            }
            else{
                int val = (num1[index] - '0') + carry;
                num1[index] = (val % 10) + 48;
                carry = val / 10;
            }
        }
        else if(num2.size() > num1.size()){
            int index = num2.size() - num1.size() - i;
            if(index == -1){
                string c;
                c.push_back(carry + 48);
                num2 = c.append(num2);
                carry = 0;
            }else{
                int val = (num2[index] - '0') + carry;
                num2[index] = (val % 10) + 48;
                carry = val / 10;
            }
        }
        i++;
    }
    if(num1.size() >= num2.size()) return num1;
    return num2;
}

int main(){
    string num1 = "9";
    string num2 = "99";

    cout<<add_string(num1,num2);

    return 0;
}