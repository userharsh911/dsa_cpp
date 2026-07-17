#include <iostream>
#include <vector>
using namespace std;

int main(){
    int v[] {22,33,44,55};
    int c[] {2,3,4,5};
    
    // v = c; // not valid throw error

    int (&k)[4] = c;
    v[0] = 1;

    int *ptr = c;
    ptr[0] = 4;

    cout<<v[0]<<endl;
    cout<<sizeof(c)/4<<endl;

    cout<<&v<<" "<<&c<<" "<<&k<<" "<<ptr;
    return 0;
}