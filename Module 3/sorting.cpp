#include<bits/stdc++.h>
using namespace std;
int main()   
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i]; 
    }
    //sorting
    sort(a,a+n);  // a+3 dile first 3 ta sort korbe
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" "; 
    }

    return 0;
}