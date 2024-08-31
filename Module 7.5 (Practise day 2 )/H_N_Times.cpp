#include<bits/stdc++.h>
using namespace std;
void printCharacterNTimes(int N,char C) 
{
    for (int i = 0; i < N; i++) 
    {
        cout << C << " ";
    }
    cout << endl;
}
int main() 
{
    int T;
    cin >> T;
    while (T--) 
    {
        int N;
        char C;
        cin >> N >> C;
        printCharacterNTimes(N, C);
    }
    return 0;
}
