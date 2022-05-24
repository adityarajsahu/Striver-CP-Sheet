#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, num;
    cin >> N;

    for(int i = 0; i < N; i++)
    {
        cin >> num;
        if(num == 1)
        {
            cout << "HARD" << endl;
            return 0;
        }
    }
    cout << "EASY" << endl;
    return 0;
}