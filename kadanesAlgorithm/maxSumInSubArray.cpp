#include <iostream>
#include <vector>
using namespace std;

int  main(){

    vector<int> vec {4,-6,2,8};
    int max = 0;
    
    for(int i=0;i<vec.size();i++){
        int prefixSum = 0;
        for(int j=i;j<vec.size();j++){
            prefixSum+=vec[j];
            if(prefixSum>max) max = prefixSum;
        }
    }

    cout<<max;

    return 0;
}