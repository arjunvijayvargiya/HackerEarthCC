#include<bits/stdc++.h>
using namespace std;
int **graph;
void DFSTraversal(int visited[],int n,int src)
{
    visited[src]=1;
    cout<<src<<" ";
    for(int i=0;i<n;i++)
    {
      if(!visited[i] && graph[src][i])
          DFSTraversal(visited,n,i);
    }
}
void DFS(int visited[],int n)
{
  for(int i=0;i<n;i++)
  {
    if(!visited[i])
      DFSTraversal(visited,n,i);
  }
}
int main()
{
   int n;
   cin>>n;
   graph=new int*[n];
   for(int j=0;j<n;j++)
     graph[j]=new int[n];
   for(int j=0;j<n;j++)
     for(int k=0;k<n;k++)
        graph[j][k]=0;
    int edges;
    cin>>edges;
   for(int j=0;j<edges;j++)
   {
     int x,y;
     cin>>x>>y;
     graph[x][y]=1;
   }
   int visited[n];
   for(int i=0;i<n;i++)
     visited[i]=0;
   DFS(visited,n);
 return 0;
}
