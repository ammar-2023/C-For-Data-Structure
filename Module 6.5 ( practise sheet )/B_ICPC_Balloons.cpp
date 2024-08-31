#include<bits/stdc++.h>
using namespace std;
int cntBalloons(const string &s) 
{
    unordered_set<char> solved;
    int balloons = 0;
    for (char c : s) {
        if (solved.find(c) == solved.end()) {
            balloons += 2; // Team solves the problem and gets an additional balloon
            solved.insert(c);
        }
        else 
        {
            balloons += 1; // Team solves the problem, but doesn't get an additional balloon
        }
    }
    return balloons;
}
int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int totalBalloons = cntBalloons(s);
        cout << totalBalloons <<endl;
    }
    return 0;
}
