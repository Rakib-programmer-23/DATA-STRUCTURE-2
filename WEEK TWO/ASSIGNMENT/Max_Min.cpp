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
void insert_at_tail(Node* &head,int v)
{
    Node* newnode= new Node(v);
    Node* tmp= head;
    if(head==NULL)
    {
        head= newnode;
        return;
    }
    while(tmp->next!=NULL)
    {
        tmp=tmp->next;
    }
    tmp->next=newnode;
}
void max_min(Node* head,int &max,int &min)
{
    Node* tmp= head;
    
    max=tmp->val;
    min=tmp->val;

    tmp=tmp->next;
       
   
    while(tmp!=NULL)
    {
        if(tmp->val > max)
        {
            max=tmp->val;
        }
      
        else if(tmp->val < min)
        {
            min=tmp->val;
        }

        tmp=tmp->next;
    }
    
}

int main()
{
    int val;
    int max=INT_MIN;
    int min=INT_MAX;
    Node* head= NULL;
    while(true)
    {
        
        cin>>val;
        if(val==-1)break;
        insert_at_tail(head,val);
       
    }

    
    max_min(head,max,min);
    cout<<max<<" "<<min;
   
      
    return 0;
}