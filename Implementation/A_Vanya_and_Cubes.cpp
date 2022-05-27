#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int count = 0, i = 1, x = 0;
    while(count <= n) {
        x += i;
        count += x;
        i++;
    }

    cout << i - 2 << endl;

    return 0;
}