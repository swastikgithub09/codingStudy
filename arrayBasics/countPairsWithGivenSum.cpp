#include<iostream>
using namespace std;

void inputArray(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<"enter element of index "<<i<<" for array: "<<endl;
        cin>>arr[i];
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    inputArray(arr,n);
    int sum;
    cout<<"enter the sum: "<<endl;
    cin>>sum;
    int c=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[i] + arr[j] == sum)
            {
                c++;
            }
        }
    }
    cout<<"number of pairs are/is: "<<c<<endl;
}