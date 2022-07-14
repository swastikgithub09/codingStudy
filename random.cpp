// #include <iostream>
// using namespace std;
// class gfg {
//     /* Function to get no of set bits in binary
// representation of passed binary no. */
// public:
//     unsigned int countSetBits(int n)
//     {
//         unsigned int count = 0;
//         while (n) {
//             n &= (n - 1);
//             count++;
//         }
//         return count;
//     }
// };
// int main()
// {
//     gfg g;
//     int n;
//     cin>>n;
//     cout<<g.countSetBits(n);
// }

//a + b =c >= 100; a >= 10 && b >=10 && c>=10
// #include <iostream>
// using namespace std;

// int main() {
// 	// your code goes here
// 	int t;cin>>t;
// 	while(t--)
// 	{
// 	    int a,b,c;
// 	    cin>>a>>b>>c;
// 	    if((a + b + c >= 100) && (a >= 10 && b >=10 && c>=10))
// 	    {
// 	        cout<<"PASS"<<endl;
// 	    }
// 	    else cout<<"FAIL"<<endl;
	    
// 	}
// 	return 0;
// }

//x candies, n student ; print number of more packets(4)
// #include <iostream>
// using namespace std;

// int main() {
// 	// your code goes here
// 	int t;cin>>t;
// 	while(t--)
// 	{
// 	    int n,x;
// 	    cin>>n>>x;
// 	    if(x>n)
// 	    {
// 	        cout<<0<<endl;
// 	    }
// 	    else
// 	    {
// 	        int a = n-x;
// 	        if(a%4 != 0)
// 	        {
// 	            cout<<(a/4) + 1<<endl;
// 	        }
// 	        if(a%4 == 0)
// 	        {
// 	            cout<<(a/4) <<endl;
// 	        }
// 	    }    
// 	}
// 	return 0;
// }
