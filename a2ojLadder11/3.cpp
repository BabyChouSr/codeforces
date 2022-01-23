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
    int n; int t;
    cin >> n; cin >> t;
    string line = "";
    for (int i = 0; i < n; i++) {
        char c; cin >> c;
        line.push_back(c);
    }
    
    while (t > 0) {
        for (int i = 0; i < line.size() - 1;i++) {
            if (line[i] == 'B' && line[i + 1] == 'G') {
                swap(line[i], line[i + 1]);
                i++;
            }
        }
        t--;
    }

    cout << line;
    return 0;
}