#include <iostream>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int val) : val(val), next(nullptr) {}
};
void insert_start(Node *&head, int element)
{
    if (head == nullptr)
    {
        head = new Node(element);
        return;
    }
    Node *temp = head;
    head = new Node(element);
    head->next = temp;
}
Node* remove_k_node(Node* &node, int &k, int n = 1){
    if(!node) return nullptr;
    Node* temp = remove_k_node(node->next, k, (n + 1) % k);
    if(!n || k == 1){
        delete node;
        return temp;     
    }
    node->next = temp;
    return node;
}
int main()
{
    Node *head = nullptr;
    for (int i = 10; i >= 1; i--) insert_start(head, i);
    int k = 1;
    head = remove_k_node(head, k);
    Node* temp = head;
    while(temp){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    return 0;
}