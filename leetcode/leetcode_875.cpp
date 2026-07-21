#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int minEatingSpeed(vector<int> piles, int h){
    sort(piles.begin(),piles.end());
    int start = 1;
    int end = piles[piles.size()-1];

    while(start<end){
        int mid = start+(end-start)/2;
        int timeTaken = 0;
        for(int p : piles){
            timeTaken += p/mid;
            if(p%mid) timeTaken++;
        }
        if(timeTaken<=h) end = mid;
        else start = mid+1;
    }
    return end;
}

int main(){
    vector<int> piles {312884470};
    int h = 312884469;
    cout<<minEatingSpeed(piles,h);
    return 0;
}
