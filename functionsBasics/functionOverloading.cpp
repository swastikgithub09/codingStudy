#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//function overloading by chanding data type of arguments
int sumOfTwoNums(int a, int b)
{
    return a+b;
}

long sumOfTwoNums(long a, long b)
{
    return a+b;
}

float sumOfTwoNums(float a, float b)
{
    return a+b;
}

double sumOfTwoNums(double a, double b)
{
    return a+b;
}

//function overloading using changing number of arguments
int sum(int a, int b)
{
    return a + b;
}

int sum(int a, int b, int c)
{
    return a + b + c;
}

//function overloading with functions having default args
//default parameters are defined on rightmost side of para list
// so that normal parameters can be differentiated from default parameters
int add(int x , int y, int z=0, int w = 0) 
{
    return x+ y + z+ w;
}

int main()
{
    //function overloading using different data type
    cout<<sumOfTwoNums(2,3)<<endl;
    cout<<sumOfTwoNums(3462462, 918624976)<<endl;
    cout<<sumOfTwoNums(2.3,5.1)<<endl;
    cout<<sumOfTwoNums(86.419864,69.184753)<<endl;

    cout<<endl;

    //function overlaodign using different number of args
    cout<<sum(2,3)<<endl;
    cout<<sum(9,7,6)<<endl;

    cout<<endl;

    //function overloading with function having default arguments
    cout<<add(2,5)<<endl;
    cout<<add(2,5,8)<<endl;
    cout<<add(2,8,9,5)<<endl;

    //to convert number from decimal to binary form
    cout<<bitset<8>(4).to_string();
    
}