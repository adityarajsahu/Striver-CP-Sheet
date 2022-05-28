#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    string input, output;
    cin >> input;

    int j = 2;

    for(int i = 1; i <= N;)
    {
        output.push_back(input[i - 1]);
        i += j;
        j++;
    }

    cout << output << endl;
    return 0;
}