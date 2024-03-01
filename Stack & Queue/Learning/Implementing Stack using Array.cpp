// Stack class.
class Stack {
    
public:
    int size;
    int* arr;
    int Top;

    Stack(int capacity) {
        // Write your code here.
        Top=-1;
        size=capacity;
        arr=new int[size];

    }

    void push(int num) {
        // Write your code here.
        if(isFull()) return;
        Top++;
        arr[Top]=num;
    }

    int pop() {
        // Write your code here.
        if(isEmpty()) return -1 ;
        int x=arr[Top];
        Top--;
        return x;
    }
    
    int top() {
        // Write your code here.
        if(isEmpty()) return -1;
        int x=arr[Top];
        return x;
    }
    
    int isEmpty() {
        // Write your code here.
        if(Top==-1) return 1;
        else return 0;
    }
    
    int isFull() {
        // Write your code here.
        if(Top==size-1) return 1;
        else return 0;
    }
    
};
