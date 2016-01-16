#include<bits/stdc++.h>
using namespace std;
int countSetBits(int n)
{
    int count = 0;
    while (n) {
      n=n&(n-1) ;
      count++;
    }
    return count;
}
int main()
{
  int t;
  cin>>t;
  for(int i=0;i<t;i++)
  {
    int n;
    cin>>n;
    cout<<countSetBits(n)<<endl;
  }
 return 0;
}
