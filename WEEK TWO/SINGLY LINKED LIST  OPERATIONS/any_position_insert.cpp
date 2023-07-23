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

void insert_at_tail(Node  *&head,int v)
{
    Node* newnode= new Node(v);
    Node* tmp= head;
    if(head==NULL)
    {
        head= newnode;
         cout<<"Inserted at head"<<endl<<endl;
        return;
    }
    while(tmp->next!=NULL)
    {
        tmp=tmp->next;
    }
    // tmp ekhn last node e //

    tmp->next= newnode;
    cout<<"Inserted at tail"<<endl<<endl;

}
void insert_at_position(Node* head, int pos,int val)
{
   
    Node* newnode= new Node(val);
    Node* tmp=head;
    for(int i=1;i<=pos-1;i++)
    {
        tmp=tmp->next;
    }
    newnode->next=tmp->next;
    tmp->next=newnode;
    cout<<endl<<endl<<"Inserted at position"<<endl;
}

void print_linked_list(Node* head)
{
    cout<<endl;
    Node * tmp= head;
    while( tmp!= NULL)
    {
        cout<< tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl<<endl;
}

int main()
{
    Node* head = NULL ;
    while(true)
    {
        cout<<"Option 1 : Insert at tail"<<endl;
        cout<<"Option 2 : print linked list"<<endl;
        cout<<"Option 3 : insert at any position"<<endl;
        cout<<"Option 4 : Terminate"<<endl;
        int op;
        cin>>op;

        if(op==1)
        {
            cout<<"Please enter a value: ";
            int v;
            cin>>v;
            insert_at_tail(head,v);
        }
        else if(op==2)
        {
        print_linked_list(head);
        }
        else if(op==3)
        {
            int pos,val;
            cout<<"enter position:"<<" ";
         
            cin>>pos;
            cout<<"enter a value:"<<" ";
      
            cin>>val;
            insert_at_position(head,pos,val);

        }
        else if(op==4)
        {
            break;
        }
                
    }
      
    return 0;
}