#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n, k, count = 0;
    cin >> n >> k;
    vector<int> scores(n);
    for (int i = 0; i < n; i++) cin >> scores[i];
    for (int i = 0; i < n; i++) 
        count += (scores[i] >= scores[k-1] && scores[i] > 0);
    cout << count;
    return 0;
}