#include<iostream>
using namespace std;
int sum(int , int); //function declaration

int main()
{
    sum(10,30);
}

int sum(int num1, int num2)    //function defining
{
    cout<<  num1+num2;
}