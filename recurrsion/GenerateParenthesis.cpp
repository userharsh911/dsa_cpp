#include <iostream>
#include <string>
using namespace std;

void generateParenthesis(int n, string& answer, int left, int right, string& outputSet){
    if(left + right == 2 * n){
        answer.append(outputSet);
        answer.append(", ");
        return;

    }
    if(left < n){
        outputSet.push_back('(');
        generateParenthesis(n, answer,left + 1, right, outputSet);
        outputSet.pop_back();
    }
    if(right < left){
        outputSet.push_back(')');
        generateParenthesis(n, answer,left, right + 1, outputSet);
        outputSet.pop_back();
    }
}

int main(){
    int n = 3;
    string output;
    string temp;
    generateParenthesis(n, output, 0, 0, temp);
    cout<<output;
    return 0;
}