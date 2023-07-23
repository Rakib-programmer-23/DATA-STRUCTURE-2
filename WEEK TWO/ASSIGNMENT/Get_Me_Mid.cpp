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


void insert_at_tail(Node*&head,int v,int &cnt)
{
    cnt++;
    Node* newnode= new Node(v);
    Node* tmp= head;
    if(head==NULL)
    {
        head=newnode;
        return;
    }

    while(tmp->next!=NULL)
    {
        tmp = tmp->next;
    }
    tmp->next=newnode;
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

void find_mid(Node* head,int cnt)
{
    Node* tmp=head;
    int mid=(cnt)/2;

    if(cnt%2!=0)
    {
        while(mid--)
        {
           
            tmp=tmp->next;
        }
        cout<<tmp->val;

    }
    else if(cnt%2==0)
    {
        mid=mid-1;
        while(mid--)
        {
            tmp=tmp->next;
        }
        cout<<tmp->val<<" "<<tmp->next->val;
    }
 
    
      

}



int main()
{
    Node* head= NULL;
    int cnt=0;
    while(true)
    {
        int v;
        cin>>v;
        if(v==-1)break;
        insert_at_tail(head,v,cnt);

    }

    for(Node* i=head;i->next!=NULL;i=i->next)
    {
        for(Node* j=i->next;j!=NULL;j=j->next)
        {
            if(i->val < j->val )
            {
                swap(i->val,j->val);
            }
        }
    }
    find_mid(head,cnt);
    
    return 0;
}