#include<iostream>
using namespace  std;
int main()
{
    //input size of array
    int n; cin>>n;

    //declaring array
    int arr[n];

    //input elements in array
    for(int i=0;i<n;i++)
    {
        cout<<"enter elements for array1: "<<endl;
        cin>>arr[i];
    }

    //max and min var
    int max,min;
    max = arr[0];
    min = arr[0];

    for(int i =1; i<n;i++)
    {
        

        if(max < arr[i])
        {
            max = arr[i];
        }

        if(min > arr[i ])
        {
            min = arr[i];
        }
    }

    cout<<"max is "<<max <<" "<<"min is "<<min<<endl;

}