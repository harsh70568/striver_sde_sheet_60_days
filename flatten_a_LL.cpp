#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the Node class:

class Node {
public:
	int data;
	Node* next;
	Node* child;

	Node(int data) {
		this->data = data;
		this->next = NULL;
		this->child = NULL;
	}
};

*****************************************************************/
Node* merge_list(Node* head_A, Node* head_B)
{
    Node* dummy = new Node(0);
    Node* curr = dummy;
    while(head_A && head_B)
    {
        if(head_A->data <= head_B->data)
        {
            curr->child = head_A;
            head_A = head_A->child;
            curr = curr->child;
            curr->next = NULL;
        }
        else
        {
            curr->child = head_B;
            head_B = head_B->child;
            curr = curr->child;
            curr->next = NULL;
        }
        
    }
    
    if(head_A)
    {
        curr->child = head_A;
    }
    
    if(head_B)
    {
        curr->child = head_B;
    }
    
    return dummy->child;
}
Node* flattenLinkedList(Node* head) 
{
	// Write your code here
    if(head == NULL || head->next == NULL) return head;
    head->next = flattenLinkedList(head->next);
    return  merge_list(head,head->next);
}
