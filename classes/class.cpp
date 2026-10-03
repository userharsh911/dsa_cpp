#include <iostream>
using namespace std;

class Student{
    private:
        string real_name = "null";
    public:
        string name;
        int age;
        int roll_no;
        string grade;
        string sayMyName(){
            return real_name;
        }
        void setRealName(string name){
            real_name = name;
        }
    
};

int main(){
    Student s1;
    s1.name = "Harsh";
    s1.age = 19;
    s1.roll_no = 252;
    s1.grade = "A+";

    cout<<s1.name<<endl;

    s1.setRealName("Harsh kumar");

    cout<<s1.sayMyName()<<endl;


    Student *s2 = new Student;
    s2->name = "Dynamic name";
    s2->age = 22;
    s2[0].grade = "A++";
    cout<<(*s2).name<<endl;
    cout<<s2[0].age<<endl;
    cout<<s2->grade<<endl;

    cout<<sizeof(s2);

    return 0;
}