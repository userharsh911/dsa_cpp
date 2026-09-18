#include <iostream>
#include <vector>
using namespace std;

int towerOfHanoiSteps(int n, char& source, char& helper, char& destination){
    if(n == 1){
        cout<<"move disk "<<n<<" from "<<source<<" to "<<destination<<endl;
        return 1;
    }
    int total_moves = 0;
    total_moves += towerOfHanoiSteps(n - 1, source, destination, helper);
    cout<<"move disk "<<n<<" from "<<source<<" to "<<destination<<endl;
    total_moves += towerOfHanoiSteps(n - 1, helper, source ,destination);
    return total_moves + 1;
}

int main(){
    int n = 5;
    char source = 'A';
    char helper = 'B';
    char destination = 'C';
    cout<<"Total Moves: "<<towerOfHanoiSteps(n, source, helper, destination);
    return 0;
}