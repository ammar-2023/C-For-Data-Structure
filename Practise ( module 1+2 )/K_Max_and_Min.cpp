#include<bits/stdc++.h>
using namespace std;
int main()   
{
    int A, B, C;
    cin >> A >> B >> C;

    int minimumNumber = min({A, B, C});
    int maximumNumber = max({A, B, C});

    cout << minimumNumber << " " << maximumNumber <<endl;

    return 0;
}
