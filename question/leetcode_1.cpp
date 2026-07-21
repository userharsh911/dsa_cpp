// Maximum Value of an Alternating Sequence©leetcode

#include <iostream>
using namespace std;

int main(){
    class Solution {
    public:
        long long maximumValue(int n, int s, int m) {
            if (n == 1) return s;

            long long peaksIfStartLow = 1LL * (n / 2) * (m - 1) + 1LL + s;
            long long peaksIfStartHigh = 1LL * ((n - 1) / 2) * (m - 1) + s;

            return max(peaksIfStartLow, peaksIfStartHigh);
        }
    };
    return 0;
}