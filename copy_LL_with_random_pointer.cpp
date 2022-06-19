#include <bits/stdc++.h> 
/*************************************************************

    Following is the LinkedListNode class structure

    template <typename T>   
    class LinkedListNode
    {
        public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode<T> *random;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*************************************************************/

LinkedListNode<int> *cloneRandomList(LinkedListNode<int> *head)
{
    LinkedListNode<int> *curr = head;
    LinkedListNode<int> *dummy = new LinkedListNode<int>(0);
    LinkedListNode<int> *tail =  dummy;
    
    while(curr){
        LinkedListNode<int> *node = new LinkedListNode<int>(curr->data);
        LinkedListNode<int> *next = curr->next;
        curr->next = node;
        node->next = next;
        curr = next;
    }
    // putting random pointer
    curr = head;
    while(curr)
    {
        if(curr->next!=NULL){
           curr->next->random = curr->random!=NULL ? curr->random->next : NULL;
       }
        curr = curr->next->next;
    }
    
    // cloned LL
    curr = head;
    while(curr){
        tail->next = curr->next;
        tail = tail->next;
        curr->next = tail->next;
        curr = curr->next;

    }
    
    return dummy->next;
}
