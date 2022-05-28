#include <bits/stdc++.h>
using namespace std;

int main() {
    string input;
    cin >> input;

    string output;
    for(int i = 0; i < input.length(); i++)
    {
        input[i] = tolower(input[i]);
        if(!(input[i] == 'a' || input[i] == 'e' || input[i] == 'i' || input[i] == 'o' || input[i] == 'u' || input[i] == 'y'))
        {
            output.push_back('.');
            output.push_back(tolower(input[i]));
        }
    }
    cout << output;

    return 0;
}