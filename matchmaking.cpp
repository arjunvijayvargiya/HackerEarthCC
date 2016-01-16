#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  for(int i=0;i<t;i++)
  {
    int n;
    cin>>n;
    int girls[n];
    int boys[n];
    for(int j=0;j<n;j++)
      cin>>girls[j];
    for(int j=0;j<n;j++)
      cin>>boys[j];
    sort(girls,girls+n);
    sort(boys,boys+n);
    reverse(boys,boys+n);
    int cnt=0;
    for(int j=0;j<n;j++)
    {
       if(girls[j]%boys[j]==0 || boys[j]%girls[j]!=0)
         cnt++;
    }
    cout<<cnt<<endl;
  }
  return 0;
}
