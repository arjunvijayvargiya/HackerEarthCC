#include<bits/stdc++.h>
using namespace std;
int main()
{
 int t;
 cin>>t;
 for(int i=0;i<t;i++)
 {
   string str;
   cin>>str;
   int x=str.length();
   int len[x];
   if(str[0]=='R')
     len[0]=1;
   else
     len[0]=0;
   int start=0;
   if(str[0]=='R')
     start++;
   if(str[1]=='R')
     start++;
   len[1]=start;
   int currlen=start;
   for(int j=2;j<str.length();j++)
   {

   }
   int max=len[0];
   for(int j=1;j<str.length();j++)
   {
      if(len[j]>max)
        max=len[j];
   }
   cout<<max<<endl;
 }
 return 0;
}
