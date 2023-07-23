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
        return;
    }
    while(tmp->next!=NULL)
    {
        tmp=tmp->next;
    }
    // tmp ekhn last node e //

    tmp->next= newnode;

}

void print_linked_list(Node* head)
{
    Node * tmp= head;
    while( tmp!= NULL)
    {
        cout<< tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}

int main()
{
    Node* head = NULL ;
    while(true)
    {
        cout<<"Option 1 : Insert at tail"<<endl;
        cout<<"Option 2 : print linked list"<<endl;
        cout<<"Option 3 : Terminate"<<endl;
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
            break;
        }
                
    }
      
    return 0;
}