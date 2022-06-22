#include<bits/stdc++.h>

class Queue {
public:
    queue<int> q;
    Queue() {
        // Implement the Constructor
        //queue<int> q;
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        // Implement the isEmpty() function
        return q.empty() ? 1 : 0;
    }

    void enqueue(int data) {
        // Implement the enqueue() function
        q.push(data);
    }

    int dequeue() {
        // Implement the dequeue() function
        if(q.empty()) return -1;
        else
        {
            int ans = q.front();
            q.pop();
            return ans;
        }
    }

    int front() {
        // Implement the front() function
        return (q.empty()) ? -1 : q.front();
    }
};
