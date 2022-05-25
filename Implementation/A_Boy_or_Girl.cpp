#include <bits/stdc++.h>
using namespace std;

int main()
{
    string input;
    cin >> input;

    unordered_map<char, int> m;
    for(char c : input)
    {
        m[c]++;
    }

    int count = 0;
    for(auto x : m)
    {
        count++;
    }

    if(count % 2 == 0)
    {
        cout << "CHAT WITH HER!" << endl;
    }
    else
    {
        cout << "IGNORE HIM!" << endl;
    }

    return 0;
}