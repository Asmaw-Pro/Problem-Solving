#include <iostream>
using namespace std;
int main() {
    int n, X = 0;
    cin >> n;
    string input;
    while (n--) {
        cin >> input;
        X+= (input[1] == '+') ? 1 : -1;
    }
    cout << X;
    return 0;
}
