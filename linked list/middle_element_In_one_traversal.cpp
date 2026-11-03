#include <iostream>
#include <vector>
using namespace std;

class Node{
    public:
        int val;
        Node* next;
        Node(int val) : val(val), next(nullptr){}
};
void insert_start(Node* &head, int element){
    if(head == nullptr){
        head = new Node(element);
        return;
    }
    Node* temp = head;
    head = new Node(element);
    head->next = temp;
}
int main(){
    Node* head = nullptr;
    for(int i = 3; i >= 1 ; i--) insert_start(head, i);
    Node* slow_pointer = head;
    Node* fast_pointer = head;
    while(fast_pointer && fast_pointer->next){
        slow_pointer = slow_pointer->next;
        fast_pointer = fast_pointer->next->next;
    }
    cout<<slow_pointer->val<<endl;
    return 0;
}