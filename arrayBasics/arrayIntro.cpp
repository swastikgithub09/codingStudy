#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];

    //input array
    for(int i=0;i<n;i += 1)
    {
        cin>>arr[i];
    }
    
    //output array
    for(int i=0;i<n;i += 1)
    {
        cout<<i+1<<"element in array is: "<< arr[i]<<endl;
    }

}