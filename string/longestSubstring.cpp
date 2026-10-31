#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    string s = "abcabadef"; // adebc
    string maxOutput;
    string output;
    output.push_back(s[0]);
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] >= s[i - 1])
        {
            output.push_back(s[i]);
            continue;
        }
        else if (output.size() > maxOutput.size())
            maxOutput = output;
        output.clear();
        output.push_back(s[i]);
    }
    if (output.size() > maxOutput.size())
        maxOutput = output;
    cout << maxOutput;


 }