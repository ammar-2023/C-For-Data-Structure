#include<bits/stdc++.h>
using namespace std;
string reverse(const string &s) 
{
    stringstream ss(s);
    string word, result;

    while (ss >> word) 
    {
        reverse(word.begin(), word.end());
        result += word + " ";
    }
    // Remove the trailing space
    if (!result.empty()) 
    {
        result.pop_back();
    }
    return result;
}
int main() 
{
    string s;
    getline(cin, s);
    string reversedWords = reverse(s);
    cout << reversedWords << endl;

    return 0;
}
