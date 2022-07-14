//initializing dynamic array and the deleting it

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int *arr=new int[n];
    for(int i=0; i <n; i++)
    {
        cin>>arr[i]; 
    }
    cout<<"array elements are:"<<endl;
    
    for(int i =0; i<n; i++)
    {
        cout<<arr[i]<<endl;
    }

    delete[] arr;

}