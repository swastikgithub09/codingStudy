#include<iostream>
using namespace std;
int main()
{
    // int a;
    // a = 10;
    // int* p;
    // p = &a;
    // cout<<"*p is "<<*p<<" "<<"p is "<<p<<" "<<" &a is "<<a<<" ";

    int a = 10,b=20;
    int *p = &a;
    
    cout<<p<<endl<<*p<<endl;
    *p = b;             //Will the pointer change pointing to b? NO
    
    cout<<p<<endl<<*p<<endl;
    cout<<a;
}