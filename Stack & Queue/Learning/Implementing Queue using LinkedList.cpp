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
 * 
 * Definition of Queue
 * struct Queue {
 *   Node* front;
 *   Node* rear;
 *   void push(int);
 *   int pop();
 *   
 *   Queue() {
 *       front = rear = NULL;
 *   }
 * };
 */

void Queue::push(int x) {
    // Write Your Code Here
    Node* node1=new Node(x);
    if(front==nullptr)
    {
        front=node1;
        rear=node1;
        return;
    }
    rear->next=node1;
    rear=node1;
    return;
}

int Queue::pop() {
    // Write Your Code Here
    if(front==nullptr) return -1;
    int x=front->data;
    front=front->next;
    return x;
}