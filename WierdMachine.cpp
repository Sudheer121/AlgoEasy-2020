/*
Suppose n>k and n and k both are positive,
then the number on machine reduces to n-k for 1st time, n-2k for second time,
n-3k third time until it reaches n%k.

Let n%k be t.
If we now show the card to the machine then its value changes to k-t.
Then k-(k-t) i.e t.
Hence, the value switches between t and k-t.
Example:
n = 15, k = 4.
Here are the changes on machine----->  15 ---> 11 ---> 7 ---> 3.  (Also 3 = 15%4)
Further changes will be------------->  3 ----> 1 ----> 3 ---->1 .....................


If n is negative then we can see that every next value is positive,since in every next step
the machine takes an absolute value, absolute values are non-negative.Hence will be the minimum value.
Example n = -3 and k = 4:
Changes on machine are   ------> -3 ---> 7 ---> 3 ---> 1 ---> 3 --->1 .......
Minimum = -3.

If k is negative and n is positive, then the value of n only increases.
Hence the initial value on machine will be minimum.
Example:
n = 3 and k = -4.
Changes on machine are ----> 3 ---> 7 ---> 11 ---> 15 ........
Minumum = 3.
*/

#include<iostream>
#define ll long long
using namespace std;
ll n,k,q;
int t;
int main()
{
cin>>t;
while(t--)
{
  cin>>n>>k;
  if(k<=0 || n<=0)
  {
   cout<<n<<endl;
  }
  else
  {
  q = n%k;
  cout<< min(q,k-q) <<endl;
  }
}
return 0;
}
 
