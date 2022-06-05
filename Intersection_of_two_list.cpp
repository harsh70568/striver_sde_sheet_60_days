#include <bits/stdc++.h> 
/****************************************************************
 
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

*****************************************************************/
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
int findIntersection(Node *firstHead, Node *secondHead)
{
    //Write your code here
    Node* ptr1 = NULL;
    Node* ptr2 = NULL;
    int len1 = length(firstHead);
    int len2 = length(secondHead);
    int d = abs(len1-len2);
    if(len1 > len2)
    {
        ptr1 = firstHead;
        ptr2 = secondHead;
    }
    if(len2 > len1)
    {
        ptr1 = secondHead;
        ptr2 = firstHead;
    }
    while(d--)
    {
        ptr1 = ptr1->next;
    }
    while(ptr1 && ptr2)
    {
        if(ptr1 == ptr2)
        {
            return ptr1->data;
        }
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    return -1;
}
