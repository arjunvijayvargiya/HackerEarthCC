#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
  ll t;
  cin>>t;
  for(ll i=0;i<t;i++)
  {
    ll x,y,n;
    cin>>x>>y>>n;
    ll arr[n];
    arr[0]=x;
    arr[1]=y;
    ll sum=x+y;
    for(ll j=2;j<n;j++)
    {
       ll minn=min(arr[j-1],arr[j-2]);
       ll maxx=max(arr[j-1],arr[j-2]);
       arr[j]=maxx-minn;
       sum=sum+arr[j];
    }
    cout<<sum<<endl;
  }
 return 0;
}
