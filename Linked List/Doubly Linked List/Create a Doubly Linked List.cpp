/*
 * Definition for doubly-linked list.
 * class Node
 * {
 * public:
 *    int data;
 *    Node *next, *prev;
 *    Node() : data(0), next(nullptr), prev(nullptr) {}
 *    Node(int x) : data(x), next(nullptr), prev(nullptr) {}
 *    Node(int x, Node *next, Node *prev) : data(x), next(next), prev(prev) {}
 * };
 */

Node* constructDLL(vector<int>& arr) {
    // Write your code here
    Node* head=new Node(arr[0]);
    Node* temp=head;

    int arrSize=arr.size();
    for(int i=1; i<arrSize; i++)
    {
        Node* new_node=new Node(arr[i],nullptr,temp);
        temp->next=new_node;
        temp=temp->next;
    }

    return head;
}
