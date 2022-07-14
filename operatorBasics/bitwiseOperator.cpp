#include<iostream>
using namespace std;
int main()
{
    int a =3;
    int b =6;
    
    cout<<" a&b: " << (a&b) <<endl;
    cout<<"a|b: "<< (a|b) << endl;
    cout<<"~a: "<< (~a) << endl;
    cout<<"a^b: "<< (a^b) << endl;

    cout<<"19<<2: "<< (19<<2) << endl; 
    cout<<"21>>2: "<< (21>>2) << endl;

    //application of bitwise operator
    //1. even odd num
    int x;cin>>x;
    if(x&1 == 1) cout<<x <<" is odd"<<endl;

    else  cout<<x<<"is even"<<endl; //(x&1 == 0)
    
    //2.2^n
    int n;cin>>n;
    cout<<"2 ^ "<< n <<" is "<< (1<<n)<<endl;



    
}