#include <bits/stdc++.h> 

#approach - 2
here i am taking extra space

Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    // Write your code here.
    Node<int>* dummy = new Node<int>(0);
    Node<int>* curr = dummy;
    while(first && second)
    {
        if(first->data < second->data)
        {
            curr->next = first;
            first = first->next;
        }
        else
        {
            curr->next = second;
            second = second->next;
        }
        curr = curr->next;
    }
    if(first)
    {
        curr->next = first;
        first = first->next;
    }
    if(second)
    {
        curr->next = second;
        second = second->next;
    }
    return dummy->next;
}
