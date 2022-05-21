#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, answer = 0;
    cin >> N;
    string input;

    for(int i = 0; i < N; i++) {
        cin >> input;

        if(input == "Tetrahedron")
        {
            answer += 4;
        }
        else if(input == "Cube")
        {
            answer += 6;
        }
        else if(input == "Octahedron")
        {
            answer += 8;
        }
        else if(input == "Dodecahedron")
        {
            answer += 12;
        }
        else
        {
            answer += 20;
        }
    }
    cout << answer;
}
