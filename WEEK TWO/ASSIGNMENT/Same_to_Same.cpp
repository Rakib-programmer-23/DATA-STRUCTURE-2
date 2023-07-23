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
void insert_at_tail(Node* &head,int v,int &cnt)
{
    cnt++;
    Node* newnode= new Node(v);
    Node* tmp=head;
    if(head==NULL)
    {
        head=newnode;
        return;
    }
    while(tmp->next!=NULL)
    {
        tmp=tmp->next;
    }
    tmp->next=newnode;
}
/*void print_linked_list(Node*head)
{
    Node* tmp=head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}
*/
void same_to_same(Node*head1,Node*head2,int cnt1,int cnt2)
{
    if (cnt1 != cnt2)
    {
        cout << "NO";
        return;
    }
    else  if(cnt1==cnt2)
    {
    while (head1 != NULL && head2 !=NULL) 
    {
        if (head1->val != head2->val)
         {
            cout << "NO";
            return;
         }
        head1 = head1->next;
        head2 = head2->next;
    }
    }

    if (head1 ==NULL && head2 == NULL) 
    {
        cout << "YES";
    } 
    else 
    {
        cout << "NO";
    }
    
}
int main()
{
  int cnt1=0 ;
  int cnt2=0;
   Node* head1=NULL;
   Node* head2=NULL;
   while(true)
   {
   
    int val;
    cin>>val;
    if(val==-1)break;
    insert_at_tail(head1,val,cnt1);
   
   }


    while(true)
   {
   
    int val;
    cin>>val;
    if(val==-1)break;
    insert_at_tail(head2,val,cnt2);
   
   }

   same_to_same(head1,head2,cnt1,cnt2);

  

  

    
      
    return 0;
}