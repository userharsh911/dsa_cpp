#include <iostream>
using namespace std;

class Customer{
    string name;
    int account_number;
    int balance;
    static int total_customers;
    static int total_balance;

    public:
        Customer(string name, int account_number, int balance){
            this->name = name;
            this->account_number = account_number;
            this->balance = balance;
            total_balance += balance;
            total_customers++;
        }
        void deposit(int amount){
            if(amount > 0){
                this->balance = amount;
                total_balance += amount;
            }
        }
        void withdrawn(int amount){
            if(amount <= balance && amount){
                this->balance = amount;
                total_balance -= amount;
            }
        }
        // static function 
        static void display(){
            cout<<total_customers<<" "<<total_balance<<endl;
        }
        void display_total_customers(){
            cout<<total_customers<<endl;
        }

};

int Customer::total_customers = 0;
int Customer::total_balance = 0;

int main(){
    Customer c1("Harsh", 123, 1000);
    Customer c2("Rohit", 133, 2400);
    // c1.display_total_customers();
    c1.deposit(3500);
    c2.withdrawn(900);

    Customer::display();
    c1.display();
    return 0;
}