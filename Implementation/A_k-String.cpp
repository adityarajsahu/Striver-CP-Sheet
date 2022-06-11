#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ll N;
    cin >> N;

    string input;
    cin >> input;
    
    unordered_map<char, int> m;
    for(auto c : input) {
        m[c]++;
    }

    string answer = "";

    for(auto x : m) {
        if(x.second % N != 0) {
            cout << -1;
            return 0;
        }

        string s = "";
        for(int i = 0; i < x.second / N; i++) {
            s += x.first;
        }
        answer += s;
    }

    string result = "";
    for(int i = 0; i < N; i++) {
        result += answer;
    }
    cout << result;

    return 0;
}