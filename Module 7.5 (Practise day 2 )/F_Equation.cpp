#include <iostream>
#include <cmath>
using namespace std;

int calculateEquationResult(int X, int N) {
    int result = 0;

    for (int i = 0; i <= N; i += 2) {
        result += pow(X,i);
    }
    return result;
}
int main() {
    int X, N;
    cin >> X >> N;
    int S = calculateEquationResult(X, N);
    cout << S << endl;
    return 0;
}
