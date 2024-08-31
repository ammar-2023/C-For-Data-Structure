#include <bits/stdc++.h>
using namespace std;

class CustomSort
{
public:
    char c;
    int cnt;
};

int main()
{
    int n;
    cin >> n;

    CustomSort frq[26];
    for (int i = 0; i < 26; i++)
    {
        frq[i].c = (i + 'a');
        frq[i].cnt = 0;
    }

    for (int i = 0; i < n; i++)
    {
        char c;
        cin >> c;
        frq[c - 'a'].cnt++;
    }

    for (int i = 0; i < 26; i++)
    {
        cout << frq[i].c << " " << frq[i].cnt << endl;
    }

    return 0;
}
