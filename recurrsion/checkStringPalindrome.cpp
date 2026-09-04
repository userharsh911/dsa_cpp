#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool isPalindrome(string& name, int index = 0){

    if(index == (name.size() / 2) + 1) return 1;
    else 0;

    if(name[index] == name[(name.size() - 1) - index]) return isPalindrome(name, index + 1);
    else return 0;
}

int main(){
    string name = "sassas";
    cout<<isPalindrome(name);

    return 0;
}