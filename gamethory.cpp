#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
  int q;
  cin>>q;
  for(int i=0;i<q;i++)
  {
    int arr[3];
    for(int j=0;j<3;j++)
     cin>>arr[j];
     int chance=0;
     while(1)
     {
       sort(arr,arr+3);
       if(arr[2]!=0)
            arr[2]--;
       else
       {
         if(chance==0)
           cout<<"Ashima"<<endl;
         else
           cout<<"Aishwarya"<<endl;
           break;
       }
       sort(arr,arr+3);
       if(arr[2]!=0 && arr[1]!=0)
       {
         arr[2]--;
         arr[1]--;
       }
       else
       {
         iif(chance==0)
           cout<<"Ashima"<<endl;
         else
           cout<<"Aishwarya"<<endl;
           break;
       }
       sort(arr,arr+3);
       if(arr[2]!=0 && arr[1]!=0 && arr[0]!=0)
       {
         arr[2]--;
         arr[1]--;
         arr[0]--;
       }
       else
       {
         if(chance==0)
           cout<<"Ashima"<<endl;
         else
           cout<<"Aishwarya"<<endl;
           break;
       }
       if(chance==0)
         chance=1;
       else
         chance=0;
     }
  }
 return 0;
}
