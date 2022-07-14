#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n; cin>>n;
    int ogn = n;
    int l=0,sum=0;

    while(n>0)
    {
        l= n%10;
        sum += pow(l,3);
        n /= 10;
    }
    cout<<sum<<endl;
    if(sum == ogn) 
    {
        cout<<"number is armstrong";
    }

    else cout<<"number is not armstrong";

}