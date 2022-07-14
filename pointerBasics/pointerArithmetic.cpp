#include<iostream>
using namespace std;
int main()
{
    int a;
    a = 5;
    

    int *ptr1;
    ptr1 =&a;
  
    cout<<"ptr1 is "<<ptr1<<endl;

    cout<<"ptr1 ++ is "<<ptr1 + 1<<endl;
}