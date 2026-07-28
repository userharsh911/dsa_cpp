#include <iostream>
#include <string>
using namespace std;

int main(){
    string s = "Hello\t \"and\"\nwelcome";
    string test = "Harsh"; // last value always contains a null('\0') character in every string or character array
    cout<<s<<endl;

    int i = 0;
    while(i<=5){
        if(test[i]=='\0') cout<<" null "<<i;
        else cout<<test[i];
        i++;
    }

    string sentence;
    getline(cin,sentence);
    cout<<sentence;

    return 0;
}