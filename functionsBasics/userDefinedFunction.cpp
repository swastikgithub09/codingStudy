//four types based on combination of arg and return value
//arg and return, no arg and no return, arg and no return, no arg and return

#include<iostream>
using namespace std;
void sayHappyBirthday();
void checkEvenOdd(int);
int sumOfOneAndTwo();
int sumOfTwoNums(int, int);
int main()
{
    sayHappyBirthday();
    checkEvenOdd(9);

    int sum12 = sumOfOneAndTwo();
    cout<<sum12<<endl;

    int sum =sumOfTwoNums(2,3);
    cout<<sum<<endl;
}

//no arg and no return
//say happy birthday
void sayHappyBirthday()
{
    cout<<"Happy Birthday to you!"<<endl;
}

//arg and no return
//check even or odd
void checkEvenOdd(int x)
{
    if(x%2 == 0)
        cout<<"even num"<<endl;
    else
        cout<<"odd num"<<endl;
}

//no arg and return
//return the sum of one and two numbers
int sumOfOneAndTwo() 
{
    int a = 1;
    int b = 2;
    int sum = a + b;
    return sum;
}

//arg and return
//return the sum of two numbers
int sumOfTwoNums(int x, int y)
{
    return x + y;
}