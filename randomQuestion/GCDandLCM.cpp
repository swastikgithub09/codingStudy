// #include<iostream>
// using namespace std;

// int gcd(int a, int b)
// {
//    while(b !=0)
//     {
//         int next = a%b;
//         a = b;
//         b = next;
//     } 
//     return a;
// }
// int main()
// {
//     int a,b;
//     cin>>a>>b;
//     cout<<gcd(a,b);
// }
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b; 
        cin>>a>>b;
	    
        int x =a;
        int y =b;
	    while(b != 0)
	    {
	        int rem = a%b;
	        a =b;
	        b=rem;
	    }
	    cout<<a<<" "<<(y*x)/a<<endl;
	}
	return 0;
}
