/*built in functions dont need 
to be declared, defined raised by user, 
they are already present , like cmath, iostream in c++.
some of functions in cmath are sqrt(), max(),min(), round() etc. */

#include<iostream>
#include<cmath> //library function aka built it functions
using namespace std;
int main()
{
   cout<<max(60,90)<<endl; //max function
   cout<<min(77,80)<<endl;;//min function
   cout<<sqrt(80)<<endl;

   string s = "swastik";    
   cout<< s.length()<<endl; //length of string

   //lower case to upper case conversion
   for(int i =0; i<s.length(); i++)
   {
        putchar(toupper(s[i]));
   }
   
    cout<<endl;

   //to calculate a to the power b
   cout<<pow(2,3)<<endl;
}