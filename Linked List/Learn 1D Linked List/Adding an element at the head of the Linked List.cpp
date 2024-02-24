/**
 * Definition of linked list
 * class Node {
 *
 * public:
 *     int data;
 *     Node* next;
 *     Node() : data(0), next(nullptr) {}
 *     Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node* next) : data(x), next(next) {}
 * };
 */

Node* insertAtFirst(Node* list, int newValue) {
    // Write your code here

    //Solution 1: Better solution as less tokens
        Node* head=new Node(newValue);
        head->next=list;
        return head;
    
    //Solution 2
        // Node* head=list;
        // Node* new_node=new Node(newValue);
        // new_node->next=head;
        // head=new_node;

        // return head;

}