/**
 * Definition for singly-linked list.
 * class Node {
 * public:
 *     int data;
 *     Node *next;
 *     Node() : data(0), next(nullptr) {}
 *     Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node *next) : data(x), next(next) {}
 * };
 */

Node *deleteLast(Node *list){
    // Write your code here
    Node* head=new Node(list[0]);
    if (head == NULL || head->next == NULL)
        return NULL;
    
    Node* temp=head;

    while(temp->next->next!=nullptr)
    {
        temp=temp->next;
    }

    delete temp->next;
    temp->next=nullptr;
    return head;
}