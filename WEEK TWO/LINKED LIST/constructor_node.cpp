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

int main()
{
    Node a(10);
    Node b(20);

    a.next=&b;
    b.next=&a;
    
    cout<<a.next->val<<endl;
    cout<<b.next->val<<endl;
    cout<<a.val<<" "<<b.val<<endl;

    
      
    return 0;
}