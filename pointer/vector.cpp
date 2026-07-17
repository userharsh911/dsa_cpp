#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v {22,33,44,55};
    vector<int> c {2,3,4,5};
    
    v = c;

    v[0] = 1;

    vector<int>& k = c; // refernce to c vector 
    k[1] = 76; 

    cout<<v[0]<<endl;
    cout<<c[0]<<endl;
    cout<<c[1]<<endl;

    cout<<&v<<" "<<&c<<" "<<&k;
    return 0;
}