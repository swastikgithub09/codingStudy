#include <iostream>
#include <cmath>
using namespace std;
//decimal to binary form
string DecimalToBinary(int num)
{
    string str;
      while(num){
      if(num & 1) // 1
        str+='1';
      else // 0
        str+='0';
      num>>=1; // Right Shift by 1 
    }   
      return str;
}

int countBits(string s)
{
    
    int count =0;
    
    for(int i=0; i<s.length(); i++)
    {
        if(s[i] == 1)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    // int n;
    // cin>>n;
    // cout << DecimalToBinary(n);
    cout<<countBits("10001");
    // string s = "1001001";
    // cout<<s[0];

}


//submitted ans from gfg brians algo
/* #include <iostream>
using namespace std;
class gfg {
    /* Function to get no of set bits in binary
representation of passed binary no. *//*
public:
    unsigned int countSetBits(int n)
    {
        unsigned int count = 0;
        while (n) {
            n &= (n - 1);
            count++;
        }
        return count;
    }
};
int main()
{
    gfg g;
    int n;
    cin>>n;
    cout<<g.countSetBits(n);
} */