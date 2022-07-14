#include<iostream>
using namespace std;
int main()
{
    int n,m;
    //size of two arrays
    cout<<"enter size of array1 and then array2: "<<endl;
    cin>>n>>m;

    int arr1[n], arr2[m];

    //input for arr1
    for(int i=0;i<n;i++)
    {
        cout<<"enter elements for array1: "<<endl;
        cin>>arr1[i];
    }

    //input for arr2
    for(int i=0;i<m;i++)
    {
        cout<<"enter elements for array2: "<<endl;
        cin>>arr2[i];
    }

    int result1 =0,result2 =0;

    //adding elements
    for(int i =0; i<n;i++)
    {
        result1 += arr1[i];
    }

    for(int i =0; i<m;i++)
    {
        result2 += arr2[i];
    }

    cout<<result1+result2 <<endl;
}