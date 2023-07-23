#include<bits/stdc++.h>
using namespace std;
void fun(int &p)//refference kora hoise  
{
  
    p=500;
}
int main()
{
    int val=10;
    int *ptr=&val;
    fun(*ptr);

      
    cout<<ptr<<endl;// val er address print krbe
    cout<<*ptr<<endl;// modified value print korbe
    cout<<&ptr<<endl;/* prints the address of ptr, 
    which is the memory location where the pointer variable itself is stored.*/  

    return 0;
}