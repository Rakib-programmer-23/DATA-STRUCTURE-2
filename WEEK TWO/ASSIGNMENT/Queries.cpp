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
void insert_at_tail(Node*&head,Node*&tail,int p, int v)
{
    Node* newnode= new Node(p);
    
    if(head==NULL)
    {
        head= newnode;
        tail= newnode;
        
       
    }
    else if(v==0)
    {
          tail=tail;
        head=newnode;
      
    }
    else if(v==1)
    {
        head=head;
        tail=newnode;
       
        
    }
    
   
}
int main()
{
    Node* head= NULL;
    Node* tail= NULL;
    int Q;
    cin>>Q;
    while(Q--)
    {
         int v;
         cin>>v;
         int val;
         cin>>val;
         if(val==-1)break;
         insert_at_tail(head,tail,val,v);

    
       cout<<head->val<<" "<<tail->val<<endl;
    }   
    
      
    return 0;
}