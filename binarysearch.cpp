#include<bits/stdc++.h>
using namespace std;
int main()
{
 int n,q;
 cin>>n>>q;
 int arr[n];
 for(int i=0;i<n;i++)
   cin>>arr[i];
 sort(arr,arr+n);
 for(int i=0;i<q;i++)
 {
   int x;
   cin>>x;
    if(binary_search(arr,arr+n,x))
      cout<<"YES"<<endl;
    else
      cout<<"NO"<<endl;
 }
 return 0;
}
