#include<iostream>
using namespace std;
void sum(int x, int y)  //x,y are formal parameters
{
    cout<< x + y;
}

void value(int x)   //pass by value
{
    x += 10;
    cout<<"value of x in function value is "<<x<<endl;
}

void refer(int &y)  //pass by reference
{
    y += 10;
    cout<<"value of y in function reference is "<<y<<endl;
}

int main()
{
    int a=10,b=20;  //a,b are actual parameters
    sum(a,b);

    int x =4;   //pass value
    value(4);
    cout<<"value of x in main is "<<x<<endl;

    int y =8;   //pass reference
    refer(y);
    cout<<"value of y in main is "<<y<<endl;
}