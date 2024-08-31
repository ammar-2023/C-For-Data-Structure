#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin >> t;
    while(t--) 
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int evenCount = 0, oddCount = 0;
        for (int i = 0; i < n; i++) 
        {
            if (a[i] % 2 == 0) 
            {
                evenCount++;
            } else {
                oddCount++;
            }
        }
        if (evenCount == oddCount)
        {
            cout << 0 << endl;
            continue;
        }
        int diff = abs(evenCount - oddCount);
        if (diff % 2 != 0) 
        {
            cout << -1 << endl;
            continue;
        }
        cout << diff / 2 << endl;
    }

    return 0;
}
