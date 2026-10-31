#include <iostream>
using namespace std;

class Node{
    static int count;
    public:
        int data;
        Node* next;
        Node() : data(0), next(nullptr){}
        Node(int data){
            this->data = data;
            this->next = nullptr;
            count++;
        }
        Node(int data, Node* next) : data(data), next(next){}
        ~Node(){count--;}
        static int size(){return count;}
};

int Node::count = 0;

void insert_start(Node* &head, int element){
    if(head == nullptr){
        head = new Node(element);
        return;
    }
    Node* temp = head;
    head = new Node(element);
    head->next = temp;
}

void insert_end(Node* &tail, int element){
    tail->next = new Node(element);
    tail = tail->next;
}

void insert_middle(Node* &head, int pos, int val){
    if(pos < 0) return;
    if(pos == 0) return insert_start(head, val);
    pos--;
    Node* temp = head;
    while(pos--) temp = temp->next;
    Node* node = new Node(val);
    node->next = temp->next;
    temp->next = node;
}

void delete_start(Node* &head){
    if(!head) return;
    Node* temp = head->next;
    delete head;
    head = temp;
}

void delete_middle(Node* &head, Node* &tail, int pos){
    if(pos < 0 || !head) return;
    if(!pos) return delete_start(head);
    pos--;
    Node* temp = head;
    while(pos--) temp = temp->next;
    Node* node = temp->next;
    temp->next = node->next;
    delete node;
    if(!temp->next) tail = temp;
}

Node* delete_middle_recurr(Node* &node, Node* &tail, int pos){
    if(!pos){
        Node* temp = node->next;
        delete node;
        return temp;
    }
    node->next = delete_middle_recurr(node->next, tail, pos - 1);
    if(!node->next) tail = node;
    return node;
}

void delete_specific_node(Node* node){
    Node* temp = node->next;
    node->data = temp->data;
    node->next = temp->next;
    delete temp;
}


int main(){ 
    Node* head = new Node(45);
    Node* tail = head;
    // head->next = new Node(55);
    // head->next->next = new Node(66);
    insert_start(head, 35);
    insert_end(tail, 11);
    insert_start(head, 95);
    insert_start(head, 75);
    insert_end(tail, 99);
    
    Node* travel = head;
    while(travel){
        cout<<travel->data<<" ";
        travel = travel->next;
    }
    cout<<endl;
    insert_middle(head, 3, 20);
    insert_middle(head, 0, 1);
    
    delete_start(head);
    delete_middle(head, tail, head->size() - 1);
    // delete_middle(head, tail, 0);
    head = delete_middle_recurr(head, tail, head->size() - 1);
    
    
    travel = head;
    while(travel){
        cout<<travel->data<<" ";
        travel = travel->next;
    }
    cout<<endl;
    cout<<tail->data<<endl;
    cout<<head->size();
    return 0;
}