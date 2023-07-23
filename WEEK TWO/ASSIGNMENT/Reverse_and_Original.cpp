#include<bits/stdc++.h>
using namespace std;
class Node
{
    public :
        int val;
        Node* next;

        Node(int val)
        {
            this->val=val;
            this->next=NULL;
        }

};
void insert_at_tail(Node*&head,Node*&tail,int v)
{
    Node* newnode= new Node(v);
    
    if(head==NULL)
    {
        head= newnode;
        tail= newnode;
        return;
    }
    tail->next= newnode;
    tail= newnode;
   
}

void print_linked_list(Node* head)
{
    Node* tmp= head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
}

void print_reverse(Node* N)
{
    if(N==NULL) return;
    print_reverse(N->next);
    
    cout<<N->val<<" ";
   
   
}


int main()
{
   
    Node* head= NULL;
    Node* tail= NULL;
    while(true)
    {
         int val;
         cin>>val;
         if(val==-1)break;
         insert_at_tail(head,tail,val);

    }
    print_reverse(head);
    cout<<endl;
    
    print_linked_list(head);
   

    
      
    return 0;
}