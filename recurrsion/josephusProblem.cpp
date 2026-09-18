#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n = 6;
    int k = 5;
    k = k % n;
    int person_left = n - 1;
    vector<bool> persons(n, 0);
    int index = 0;
    int count = k;
    
    while(person_left){
        index = index % n;
        if(!persons[index]) count--;

        if(!count){
            persons[index] = true;
            count = k;
            person_left--;
            cout<<index + 1<<" ";
        }
        index++;
    }
    cout<<endl;
    for(int i = 0; i < persons.size(); i++)
        if(!persons[i]) cout<<i + 1<<" ";
   

    return 0;
}