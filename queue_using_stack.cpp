#include<bits/stdc++.h>
class Queue {
    // Define the data members(if any) here.
    
    public:
    stack<int> s1;
    stack<int> s2;
    Queue() {
        // Initialize your data structure here.
    }

    void enQueue(int val) {
        // Implement the enqueue() function.
        while(!s2.empty())
        {
            s1.push(s2.top());
            s2.pop();
        }
        s2.push(val);
        while(!s1.empty())
        {
            s2.push(s1.top());
            s1.pop();
        }
    }

    int deQueue() {
        // Implement the dequeue() function.
        if(s2.empty()) return -1;
        int temp = s2.top();
        s2.pop();
        return temp;
    }

    int peek() {
        // Implement the peek() function here.
        if(s2.empty()) return -1;
        return s2.top();
    }

    bool isEmpty() {
        // Implement the isEmpty() function here.
        return (s2.empty()) ? 1 : 0;
    }
};
