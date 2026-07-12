#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> prices = {2,4,1};

    int min = prices[0];
        int max = prices[0];
        int diff = 0;
        for(int i = 1;i<prices.size();i++){
            if(min>prices[i]){

                min = prices[i];
                max = prices[i];
                
            }
            if(max<prices[i]){
                max = prices[i];
            }
            if(max-min>diff){
                diff = max-min;
            }
        }
        if(diff>0){
            return diff;
        }
        return 0;

    return 0;
}