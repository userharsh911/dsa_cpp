#include <iostream>
#include <math.h>
using namespace std;

int totalBishopMoves(int X, int Y){
    if(X<1 || Y<1 || X>8 ||Y>8) return 0;
    int tl = min(X,Y)-1;
    int tr = min(8-(X-1),Y)-1;
    int bl = min(8-(Y-1),X)-1;
    int br = min(8-(X-1),8-(Y-1))-1;

    int total_moves = tl+tr+bl+br;
    return total_moves;
}

int main(){
    int X = 8;
    int Y = 5;
    cout<<totalBishopMoves(X,Y);
    return 0;
}