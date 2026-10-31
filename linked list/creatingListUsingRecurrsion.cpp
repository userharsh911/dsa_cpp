#include <iostream>
#include <vector>
using namespace std;
class Node{
    public:
        int value;
        Node* next;
        Node() : value(0), next(NULL){}
        Node(int value) : value(value), next(NULL){}
        Node(int value, Node* next) : value(value), next(next){}
};
// void createList(vector<int> &v, Node* &head, Node* &tail, int ptr = 0){
//     if(ptr == v.size()) return;
//     if(!head && !tail){
//         head = new Node(v[ptr]);
//         tail = head;
//         createList(v, head, tail, ptr+1);
//         return;
//     }
//     tail->next = new Node(v[ptr]);
//     tail = tail->next;
//     createList(v, head, tail, ptr+1);
// }
Node* createList(vector<int> &v, int ptr = 0){
    if(ptr == v.size()) return nullptr;
    Node* node_ptr = new Node(v[ptr]);
    node_ptr->next = createList(v, ptr + 1);
    return node_ptr;
}
Node* createList_reverse(vector<int> &v, int ptr = 0, Node* list_ptr = NULL){
    if(ptr == v.size()) return list_ptr;
    return createList_reverse(v, ptr + 1, new Node(v[ptr], list_ptr));
}
int main(){
    Node* head = NULL;
    Node* tail = NULL;
    vector<int> v{1,2,3,4,33,56,322};
    // createList(v, head, tail);
    head = createList_reverse(v);
    Node* temp = head;
    while(temp){
        cout<<temp->value<<" ";
        temp = temp->next;
    }
    cout<<endl;
    return 0;
}