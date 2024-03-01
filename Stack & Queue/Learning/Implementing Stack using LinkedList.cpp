/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
            int data;
            Node *next;
            Node()
            {
                this->data = 0;
                next = NULL;
            }
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
            Node(int data, Node* next)
            {
                this->data = data;
                this->next = next;
            }
        };


*****************************************************************/

class Stack
{
    //Write your code here
    Node* curr;
    int size;

public:
    Stack()
    {
        //Write your code here
        this->size=0;
        curr=new Node(-1);
    }

    int getSize()
    {
        //Write your code here
        return size;
    }

    bool isEmpty()
    {
        //Write your code here
        return (size==0) ? true:false;
    }

    void push(int data)
    {
        //Write your code here
        Node* new_node=new Node(data);
        new_node->next=curr;
        curr=new_node;
        size++;
    }

    void pop()
    {
        //Write your code here
        if(isEmpty()) return;
        Node* top=curr;
        curr=curr->next;
        top->next=nullptr;
        size--;
    }

    int getTop()
    {
        //Write your code here
        if(isEmpty()) return -1;
        return curr->data;

    }
};