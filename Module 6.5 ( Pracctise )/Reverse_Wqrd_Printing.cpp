#include<bits/stdc++.h>
using namespace std;
// int main()   
// {
//     string s;
//     getline(cin,s);
//     stringstream ss(s);        // সোজা
//     string word;
//     while (ss>>word)
//     {
//         cout<<word<<endl;
//     }
//     return 0;
// }
void print(stringstream &ss)
{
    string word;
    if(ss>>word)
    {
        //cout<<word<<endl;       
        print(ss);
        cout<<word<<endl;        // Reverse
    }
}
int main()
{
    string s;
    getline(cin,s);
    stringstream ss(s);
    print(ss);
    return 0;
}

