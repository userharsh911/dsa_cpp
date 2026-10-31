#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ofstream fout;
    string path = "./poem.txt";
    fout.open(path);
    fout<<"Twinke Twinke little stars\n"<<"plin plin plon";
    fout.close();

    ifstream fin;
    fin.open(path);
    string line;
    while(getline(fin, line)){
        cout<<line<<endl;
    }
    fin.close();
    return 0;
}