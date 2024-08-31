#include <iostream>
#include <string>
using namespace std;

int countWordOccurrence(string sentence, string word) {
    int count = 0;
    size_t pos = 0;

    while ((pos = sentence.find(word, pos)) != string::npos) {
        count++;
        pos += word.length();
    }
    return count;
}
int main() {
    string sentence, word;
    getline(cin, sentence);
    cin >> word;

    int occurrence = countWordOccurrence(sentence, word);
    cout << occurrence << endl;

    return 0;
}
