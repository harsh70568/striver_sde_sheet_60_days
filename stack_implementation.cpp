// Stack class.
class Stack {
   int *arr;
    int size;
    int topp;
    
public:
    
    Stack(int capacity) {
        // Write your code here.
        arr = new int[capacity];
        topp = -1;
        size = capacity;
    }

    void push(int num) {
        // Write your code here.
        if(topp < size-1)
        {
             topp++;
            arr[topp] = num;
        }
    }

    int pop() {
        // Write your code here.
        if(topp == -1) return -1;
        return arr[topp--];
    }
    
    int top() {
        // Write your code here.
        if(topp == -1) return -1;
        return arr[topp];
    }
    
    int isEmpty() {
        // Write your code here.
        return (topp == -1) ? 1 : 0;
    }
    
    int isFull() {
        // Write your code here.
        return (topp == size-1) ? 1 : 0;
    }
    
};
