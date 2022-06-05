#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

bool isPalindrome(LinkedListNode<int> *head) {
    // Write your code here.
    LinkedListNode<int>* slow = head;
    LinkedListNode<int>* fast = head;
    LinkedListNode<int>* prev = NULL;
    LinkedListNode<int>* next = NULL;
    while(fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    while(slow)
    {
        next = slow->next;
        slow->next = prev;
        prev = slow;
        slow = next;
    }
    while(head && prev)
    {
        if(head->data != prev->data)
        {
            return false;
        }
        head = head->next;
        prev = prev->next;
    }
    return true;
    
    

}
