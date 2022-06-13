#include<bits/stdc++.h>
class Stack {
	// Define the data members.
     queue<int> q1;
    queue<int> q2;
   public:
    
    Stack() {
        // Implement the Constructor.
    }

    /*----------------- Public Functions of Stack -----------------*/

    int getSize() {
        // Implement the getSize() function.
        return q2.size();
    }

    bool isEmpty() {
        // Implement the isEmpty() function.
        return (q2.empty()) ? 1 : 0;
    }

    void push(int element) {
        // Implement the push() function.
        while(!q2.empty())
        {
            q1.push(q2.front());
            q2.pop();
        }
        q2.push(element);
        while(!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();
        }
    }

    int pop() {
        // Implement the pop() function.
       if(q2.empty()) return -1;
        int temp = q2.front();
        q2.pop();
        return temp;
    }

    int top() {
        // Implement the top() function.
       if(q2.empty()) return -1;
        return q2.front();
    }
};
