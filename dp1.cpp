#include<bits/stdc++.h>
using namespace std;
int main()
{
 int t;
 cin>>t;
 for(int i=0;i<t;i++)
 {
  int n,m;
  cin>>n>>m;
  int matrix[n][m];
  for(int j=0;j<n;j++)
   for(int k=0;k<m;k++)
     cin>>matrix[j][k];
  int dp[n][m];
  dp[0][0]=1;
  for(int j=1;j<m;j++)
  {
     if(matrix[0][j]>matrix[0][j-1])
       dp[0][j]=dp[0][j-1]+1;
     else
       dp[0][j]=-1;
  }
  for(int j=1;j<n;j++)
  {
     if(matrix[j][0]>matrix[j-1][0])
       dp[j][0]=dp[j-1][0]+1;
     else
       dp[j][0]=-1;
  }
  for(int j=1;j<n;j++)
   for(int k=1;k<m;k++)
   {
      dp[j][k]=max(dp[j][k-1],dp[j-1][k])+1;
   }
  cout<<dp[n-1][m-1]<<endl;
 }
 return 0;
}
