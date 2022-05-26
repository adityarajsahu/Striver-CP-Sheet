#include <bits/stdc++.h>
using namespace std;

int main() {
    string input;
    cin >> input;

    int len = input.length();
    vector<int> count(3, 0);

    for(auto c : input)
    {
        if(c == '1')
        {
            count[0]++;
        }
        else if(c == '2')
        {
            count[1]++;
        }
        else if(c == '3')
        {
            count[2]++;
        }
    }

    int k = 0;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < count[i]; j++)
        {
            input[k] = ('0' + i + 1);
            k += 2;
        }
    }

    cout << input;

    return 0;
}