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

Node* reverse_list(Node* &head, Node* prev = nullptr){
    if(!head) return prev;
    Node* temp = reverse_list(head->next, head);
    head->next = prev;
    return temp;
}

int main(){
    Node* head = nullptr;
    for(int i = 5; i >= 1 ; i--) insert_start(head, i);
    Node* temp = head;

    // REVERSE lINKED LIST CODE
    /* 
        vector<Node*> v;
        v.push_back(nullptr);
        while(temp->next){
            v.push_back(temp);
            temp = temp->next;
        }
        head = temp;
        for(int i = v.size() - 1; i >= 0; i--){
            temp->next = v[i];
            temp = temp->next;
        } 
    */

    head = reverse_list(head);

    temp = head;
    while(temp){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    return 0;
}