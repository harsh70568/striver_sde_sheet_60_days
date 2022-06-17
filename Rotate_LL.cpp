#include <bits/stdc++.h> 
/********************************

    Following is the class structure of the Node class:
    
    class Node
    {
    	public:
    	    int data;
    	    Node *next;
    	    Node(int data)
    	    {
    	        this->data = data;
    	        this->next = NULL;
    	    }
    };

********************************/

int length(Node* head)
{
    int count = 0;
    while(head)
    {
        count++;
        head = head->next;
    }
    return count;
}
Node* reverse(Node* head)
{
    Node*p = head;
    Node* q = NULL;
    Node* r = NULL;
    while(p)
    {
        r = q;
        q = p;
        p = p->next;
        q->next = r;
    }
    return q;
}
Node *rotate(Node *head, int k) {
     // Write your code here.
    int size =  length(head);
    k = k % size;
    int move_req = size - k;
    Node* curr = head;
    Node* prev = NULL;
    while(move_req--)
    {
        prev = curr;
        curr = curr->next;
    }
    
    prev->next = NULL;
    
    curr = reverse(curr);
    prev = reverse(head);
    
    head->next = curr;
    
    head = reverse(prev);
    return head;
}
