#include <iostream>
#include <string>
using namespace std;

class Concat{
    string data;
    public:
        Concat(string data){this->data = data;}

        string operator+(string val){
            return data.append(val);
        }
};

int main(){
    Concat s("Harsh");
    cout<<s + " World";

    return 0;
}