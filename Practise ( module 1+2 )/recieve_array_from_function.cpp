#include<bits/stdc++.h>
using namespace std;
int *get_array(int m)
{
   int *a=new int[m];
   for(int i=0;i<m;i++)
   {
       cin>>a[i];
   }
   return a;
}
int main()   
{
    int n;
    cin>>n;
    int *a=get_array(n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}    

