
#include<bits/stdc++.h>
class LRUCache
{
public:
    class node{
        public:
       int key;
       int val;
       node *next;
       node *prev;
       
       node(int key1,int val1){
           key=key1;
           val=val1;
       }
      
    };
    node *head=new node(-1,-1);
    node *tail=new node(-1,-1);
      void deletenode(node * temp){
            node *nextnode=temp->next;
            node *prevnode=temp->prev;
            prevnode->next=nextnode;
            nextnode->prev=prevnode;
        }
        void insertnode(node *temp){
            temp->next=head->next;
            head->next->prev=temp;
            head->next=temp;
            temp->prev=head;
        }
    
    int cap;
    unordered_map<int,node *>mp;
    LRUCache(int capacity)
    {
        // Write your code here
        cap=capacity;
        head->next=tail;
        tail->prev=head;
    }

    int get(int key)
    {
        // Write your code here
        if(mp.find(key)!=mp.end()){
        node *temp=mp[key];
        int ans=temp->val;
        mp.erase(key);
        deletenode(temp);
        insertnode(temp);
        mp[key]=head->next;
            return ans;
         }
        return -1;
    }

    void put(int key, int value)
    {
        // Write your code here
        if(mp.find(key)!=mp.end()){
            node *temp=mp[key];
            mp.erase(key);
            deletenode(temp);
        }
          if(mp.size()==cap){
            mp.erase(tail->prev->key);
            deletenode(tail->prev);
        }
        node *temp2=new node(key,value);
        insertnode(temp2);
        mp[key]=temp2;
    }
};
