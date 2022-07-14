//dynamically creating an array - it is used using new keyword
//syntax to declare dyn arr : pointer_variable = new data_type
//syntax to delete dyn arr : delete[] arr
//use delete with [] to delete all variables otherwise delete will del only one variable
#include<iostream>
using namespace std;
int main()
{
    //declaring for specific size
    int* a = new int[9];

    //declaring for user defined size
    int n;
    cin >> n;
    int * arr = new int[n];

    //to delete dynamic array
    delete[] arr;
}