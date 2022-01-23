#include <bits/stdc++.h>
#include<stdio.h>

#define ll long long;

using namespace std;

void solve() {
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // int t;
    // cin >> t;
    // while (t--) {
    //     solve();
    // }

    int r = 0;
    int c = 0;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            int x; cin >> x;
            if (x == 1) {r = i; c = j;}
        }
    }
    cout << abs(r - 2) + abs(c - 2);
    return 0;
}