#include <iostream>
using namespace std;

class Human{

    static int count;
    protected:
        string name;
        int age;
    public:
        Human(string name, int age){
            this->name = name;
            this->age = age;
            count++;
        }
        static int displayCount(){
            return count;
        }
        void say(){
            cout<<"I'm Human"<<endl;
        }
};

class Student : public Human{
    string section;
    int roll_no;
    static int count;

    public:
        static int displayCount(){
            return count;
        }

        Student(string name, int age,string section, int roll_no) : Human(name, age){
            this->section = section;
            this->roll_no = roll_no;
            count++;
        }

        void displayInfo(){
            cout<<name<<" "<<age<<" "<<section<<" "<<roll_no<<endl;
        }
};

class Teacher : public Human{
    int salary;
    public:
        Teacher(string name, int age, int salary) : Human(name, age){
            this->salary = salary;
        }
};

int Student::count = 0;
int Human::count = 0;

int main(){
    Student s1("Harsh", 17, "CSE A", 253067);
    Student s2("Rahul", 18, "CSE B", 253364);
    s1.say();
    s1.displayInfo();
    s2.displayInfo();

    Teacher t1("Jason", 55, 12000);

    cout<<Student::displayCount()<<endl;
    cout<<Human::displayCount()<<endl;

    return 0;
}

/*
    -> single inheritance
    -> multilevel inheritance
    -> multiple inheritance
    -> hierarichal inheritance
    -> hybrid inheritance
    -> multipath inheritance



    MULTILEVEL INHERITANCE
    Parent -> child A -> child of child A -> and so on...

*/
