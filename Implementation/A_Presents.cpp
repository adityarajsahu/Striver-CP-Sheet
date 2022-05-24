#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, idx;
    cin >> N;

    vector<int> ans(N);
    for(int i = 0; i < N; i++)
    {
        cin >> idx;
        ans[idx - 1] = i + 1;
    }

    for(auto i : ans)
    {
        cout << i << " ";
    }
}