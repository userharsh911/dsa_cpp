#include <iostream>
using namespace std;

class Employee{
    string name;
    int id;
    int *record;
    public:
        // default constructor
        Employee(){
            cout<<"constructor is called"<<endl;
            record = new int[10];
        }
        // parameterised constructor
        Employee(string name, int id){
            this->name = name;
            this->id = id;
        }

        // copy constructor
        Employee(Employee &e){
            this->name = e.name;
            this->id = e.id;
        }

        void display(){
            cout<<"name "<<name<<" id "<<id<<endl;
        }
        ~ Employee(){
            cout<<"destructor call "<<endl;
            delete[] record;
        }
};

int main(){
    Employee e1, e2("Harsh",1919);
    Employee e3(e2);
    e2.display();
    e3.display();

    Employee e5;

    return 0;
}