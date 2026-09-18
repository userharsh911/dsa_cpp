#include <iostream>
#include <vector>
using namespace std;


int winner(int n, int k){
    if(n == 0) return n;
    return (winner(n - 1, k) + k) % n;
}


int main(){
    int n = 6;
    int k = 5;
    cout<<winner(n, k) + 1;
    
    // k = k % n;
    // int person_left = n - 1;
    // vector<bool> persons(n, 0);
    // int index = 0;
    // int count = k;
    
    // while(person_left){
    //     index = index % n;
    //     if(!persons[index]) count--;

    //     if(!count){
    //         persons[index] = true;
    //         count = k;
    //         person_left--;
    //         cout<<index + 1<<" ";
    //     }
    //     index++;
    // }
    // cout<<endl;
    // for(int i = 0; i < persons.size(); i++)
    //     if(!persons[i]) cout<<i + 1<<" ";
   

    return 0;
}