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
    int count=  0;
    while(head)
    {
        count++;
        head = head->next;
    }
    return count;
}
Node *addTwoNumbers(Node *head1, Node *head2)
{
    // Write your code here.
    if(length(head1) < length(head2))
    {
        Node* temp = head1;
        head1 = head2;
        head2 = temp;
    }
    Node* first = head1;
    Node* f = first;
    Node* second = head2;
    Node* temp = NULL;
    int carry = 0;
    int fd = 0;
    int sd = 0;
    while(first)
    {
        if(first)
        {
            fd = first->data;
        }
        else
        {
            fd = 0;
        }
        if(second)
        {
            sd = second->data;
        }
        else
        {
            sd = 0;
        }
        int sum = fd+sd+carry;
        first->data = sum % 10;
        carry = sum / 10;
        temp = first;
        first = first->next;
        if(second) second = second->next;
    }
    if(carry == 1)
    {
        Node* new_node = new Node(1);
        temp->next = new_node;
    }
    return f;
}
