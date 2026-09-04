#include <iostream>
using namespace std;


int main(){

    int** ptr = new int*[10];

    for(int i = 0; i < 10; i++){
        ptr[i] = new int[4];
        for(int j = 0; j < 4; j++){
            ptr[i][j] = i + j;
        }
    }

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 4; j++){
            cout<<*(*(ptr + i) + j)<<" ";
        }
    }
    for(int i = 0; i < 10; i++) delete[] ptr[i];
    delete[] ptr;

    return 0;
}