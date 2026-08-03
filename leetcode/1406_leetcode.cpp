#include <iostream>
#include <vector>
#include <string>
using namespace std;

string stoneGameIII(vector<int> stoneValue){
    int bob_score = 0;
    int alice_score = 0;
    bool alice_turn = true;

    for(int i = 0; i < stoneValue.size(); i++){
        int r2 = INT32_MIN;
        int r3 = INT32_MIN;
        if(i < stoneValue.size() - 1){
            r2 = stoneValue[i] + stoneValue[i + 1];
            if(i < stoneValue.size() - 2) r3 = r2 + stoneValue[i + 2];    
        }
        int ans = 0;
        if(r3 > r2 && r3 > stoneValue[i]){
            ans = r3;
            i += 2;
        }
        else if(r2 > stoneValue[i]){
            ans = r2;
            i++;
        }
        else ans = stoneValue[i];

        if(alice_turn){
            alice_score += ans;
            alice_turn = false;
        }else{
            bob_score += ans;
            alice_turn = true;
        }
    }

    if(alice_score > bob_score) return "Alice";
    else if(alice_score < bob_score) return "Bob";
    return "Tie";
}

int main(){
    vector<int> stoneValue {1,2,3,6};
    cout<<stoneGameIII(stoneValue);
    return 0;
}