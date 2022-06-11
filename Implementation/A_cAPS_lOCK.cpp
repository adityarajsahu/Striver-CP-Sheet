#include <bits/stdc++.h>
using namespace std;

int main() {
    string input;
    cin >> input;

    for(int i = 1; i < input.length(); i++) {
        if(input[i] >= 'a' && input[i] <= 'z') {
            cout << input << endl;
            return 0;
        }
    }

    if(input[0] >= 'a' && input[0] <= 'z') {
        input[0] -= 32;
    } else {
        input[0] += 32;
    }

    for(int i = 1; i < input.length(); i++) {
        input[i] += 32;
    }

    cout << input << endl;
    return 0;
}