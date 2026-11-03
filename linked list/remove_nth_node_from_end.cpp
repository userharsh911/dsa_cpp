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
Node* remove_nth_node_from_last(Node* &head, int n){
    if(!n){
        Node* node = head->next;
        delete head;
        return node;
    }
    head->next = remove_nth_node_from_last(head->next, n - 1);
    return head;
}
int main()
{
    Node *head = nullptr;
    for (int i = 5; i >= 1; i--)
        insert_start(head, i * 10);
    int n = 5;
    Node *temp = head;
    int size = 0;
    while (temp)
    {
        temp = temp->next;
        size++;
    }
    n = size - n;
    // WITHOUT RECURRSION DELETION
    /*
        temp = head;
        if (!n){
            head = head->next;
            delete temp;
        }
        else{
            while (--n)
                temp = temp->next;
            Node *node = temp->next;
            temp->next = node->next;
            delete node;
        }
    */
    head = remove_nth_node_from_last(head, n);
    temp = head;
    while (temp){
        cout << temp->val << " ";
        temp = temp->next;
    }

    return 0;
}