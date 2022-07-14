#include<iostream>
using namespace std;
void inputToArray(int arr[], int n)
{
    
    cout<<"Enter elements of array:"<<endl;
    for(int i=0; i<n ; i++)
    {
        cout<<"Enter element"<<i+1<<endl;
        cin>>arr[i];
    }
}

int outputOfArray(int arr[],int n)
{
    cout<<"Elements of the array are"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
}
int main()
{
    int n;
    cout<<"Enter size of array:"<<endl;
    cin>>n;
    int arr[n];
    inputToArray(arr,n);
    outputOfArray(arr,n);
    
}