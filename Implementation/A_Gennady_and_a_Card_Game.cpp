#include <bits/stdc++.h>
using namespace std;

int main() {
    string input;
    vector<string> cards(5);

    cin >> input;

    for(int i = 0; i < 5; i++)
    {
        cin >> cards[i];
        if(input[0] == cards[i][0] || input[1] == cards[i][1])
        {
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";
    return 0;
}