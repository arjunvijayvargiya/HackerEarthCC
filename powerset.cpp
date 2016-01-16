#include<bits/stdc++.h>
using namespace std;
int main()
{
 int n;
 cin>>n;
 int arr[n];
 for(int i=0;i<n;i++)
 {
   cin>>arr[i];
 }
 set<int> st;
 for(int i=0;i<pow(2,n);i++)
 {
   int xorr=0;
   for(int j=0;j<n;j++)
   {
     if(i & 1<<j)
       xorr=xorr^arr[j];
   }
   st.insert(xorr);
 }
 cout<<st.size()-1;
 return 0;
}
