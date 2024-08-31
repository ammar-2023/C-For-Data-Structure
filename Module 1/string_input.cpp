#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()   
{
    char s[100];      //without space
    cin>>s;          //input :      ammar bin
    cout<<s<<endl;  //output Only : ammar

    char a[100] ;                 //with space
    cin.getline(a,100);          //input : ammar bin qasem
    cout<<a<<endl;              //outpu : ammar bin qasem
    
    char b[100] ;                  //witho space
    cin.getline(b,100);           //input : ammar bin qasem
    cout<<strlen(b)<<endl;       //outpu : ammar bin qasem
    return 0;
}

