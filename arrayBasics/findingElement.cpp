#include<iostream>
using namespace std;

void inputArray(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<"enter eleme nts for array1: "<<endl;
        cin>>arr[i];
    }
}

/* int */void searchArray(int arr[], int n, int x)
{
    for(int i=0; i<n; i++)
    {
        if(arr[i] == x)
        {
            // return i;
            cout<<"entered number is at index "<<i<<endl;
        }
        
    }
    // return -1;
}

int main()
{
    int n;cin>>n;
    int a[n];
    
    inputArray(a,n);
    int x;cin>>x;
    // int r = 
    searchArray(a,n,x);
    // if(r == -1)
    // {cout<<"entered element is not in array";}

    // else cout<<"entered element is in array at index "<<r<<endl;

}