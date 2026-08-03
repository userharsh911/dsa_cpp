#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    // vector<int> vec = {1,2,3};
    // vec.push_back(9);
    // cout<<vec.size()<<" "<<vec.capacity()<<endl;

    // cout<<*(vec.begin()+6)<<endl;
    // cout<<*(vec.end()+2)<<endl;
    // for(int i : vec)
    //     cout<<i<<" ";


    // vector<int> v = {22,33,445,66,7};
    // // sort(v.begin(),v.end(),greater<int>());
    // sort(v.rbegin(),v.rend());

    // for(auto v : v)
    //     cout<<v<<" ";
    
    // cout<<endl;
    // cout<<find(v.begin(),v.end(),66)-v.begin(); // return index of 66 if not return size of vector v



    vector<int> v {22,44,55,72};

    // v.erase(v.begin()+2);

    // cout<<v[2];

    cout<<*v.insert(v.begin(),2,33)<<endl;
    cout<<v[0]<<endl;
    cout<<v[1]<<endl;
    cout<<v[2]<<endl;
    cout<<v[3]<<endl;

    return 0;
}