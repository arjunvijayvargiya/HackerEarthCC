#include<bits/stdc++.h>
#define ll long long;
using namespace std;
bool cmp(int a,int b)
{
  if(a%2==0 && b%2==0)
    return (a<b);
  else if(a%2==0 && b%2!=0)
  {
     return 1;
  }
  else if(a%2!=0 && b%2==0)
  {
     return 0;
  }
  else
  {
     return (a<b);
  }
}
int main()
{

  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
    cin>>arr[i];
  sort(arr,arr+n,cmp);
  int even=0;
  int odd=0;
  for(int i=0;i<n;i++)
  {
    if(arr[i]%2==0)
      even=even+arr[i];
    else
      odd=odd+arr[i];
  }
  for(int i=0;i<n;i++)
  {
    if(arr[i]%2==0)
      cout<<arr[i]<<" ";
  }
  cout<<even<<" ";
  for(int i=0;i<n;i++)
  {
    if(arr[i]%2!=0)
      cout<<arr[i]<<" ";
  }
  cout<<odd;

  return 0;
}
