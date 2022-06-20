#include <bits/stdc++.h>
using namespace std;

int main() {
    string time1, time2;
    cin >> time1 >> time2;

    int h1 = stoi(time1.substr(0, 2));
    int m1 = stoi(time1.substr(3, 2));

    int h2 = stoi(time2.substr(0, 2));
    int m2 = stoi(time2.substr(3, 2));

    int t1 = (h1 * 60) + m1;
    int t2 = (h2 * 60) + m2;
    int t = (t1 + t2) / 2;

    int h = t / 60;
    int m = t % 60;

    if(h < 10) {
        cout << "0";
    }
    cout << h << ":";

    if(m < 10) {
        cout << "0";
    }
    cout << m << endl;

    return 0;
}