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
    for(int i = 5; i >= 1 ; i--) insert_start(head, i);
    int k = 7;
    int size = 0;
    Node* temp = head;
    Node* tail = nullptr;
    while(temp){
        tail = temp;
        temp = temp->next;
        size++;
    }
    k = size - (k % size);
    temp = head;
    while(--k) temp = temp->next;
    
    Node* node = temp->next;
    temp->next = nullptr;
    tail->next = head;
    head = node;

    temp = head;
    // cout<<head->val;
    while(temp){
        cout<<temp->val<<" ";
        temp = temp->next;
    }


    return 0;
}