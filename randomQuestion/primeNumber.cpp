#include<iostream>
using namespace std;
//to check if a number is prime or not
int main()
{
    int n;
    cin>>n;
    bool isPrime =1;
    for(int i=2; i<n; i++)
    {
        if(n%i == 0) //rem is 0
        {
            
            isPrime = 0;
            break;
        }
        
    }

    if(isPrime == 0)
    {
        cout<<"not a prime number"<<endl;
    }
    else cout<<"a prime number" <<endl;
}