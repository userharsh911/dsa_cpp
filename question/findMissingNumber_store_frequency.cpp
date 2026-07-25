#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v {4,3,2,1,2,7,6};
    int max = v[0];
    int repeating_num = 0;
    int missing_num = 0;

    for(int n : v) if(n>max) max = n;

    for(int n : v) v[(n-1)%max] += max;


    for(int i=0;i<v.size();i++){
        int ans = (v[i]-1)/max;
        cout<<i+1<<" -> "<<ans<<" "<<endl;
        if(ans==0) missing_num = i+1;
        else if(ans==2) repeating_num = i+1;    
    }
    cout<<"Missing number "<<missing_num<<endl;
    cout<<"repeating number "<<repeating_num;

    return 0;
}