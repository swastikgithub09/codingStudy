#include <iostream>
#include<cmath>
using namespace std;
int totalPrime(int s, int e)
{
    int count =0;
    bool flag ;
   for(int i=s; i<=e; i++)
   {
       if(i == 0 || i ==1) continue;
       flag =1;
       for(int j=2;j<=sqrt(i);j++)
       {
           if(i%j == 0)
           {
               flag =0;
               break;
           }
       }
       if(flag == 1)
       {
           count++;
       }
   }
    return count;
}


int main() 
{
    int S, E;
    cin >> S >> E;
    cout << totalPrime(S, E);
    return 0;
}