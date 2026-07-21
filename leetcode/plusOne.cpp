#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> digits {9,9,9,9};
    int n = digits.size();
    // cout<<n;
    reverse(digits.begin(),digits.end());
    int carry = 1;
    for(int i = 0;i<4;i++){
        if(carry){
            int total = digits[i]+carry;
            digits[i] = total%10;
            carry = total/10;
        }else{
            break;
        }
    }
    
    if(carry > 0) digits.push_back(carry);
    reverse(digits.begin(),digits.end());

    // for(int n : digits)
    //     cout<<n<<" ";

    return 0;
}