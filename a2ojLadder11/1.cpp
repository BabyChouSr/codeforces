#include <bits/stdc++.h>
#include<stdio.h>

#define ll long long;

using namespace std;

void solve() {
    int sumX = 0;
    int sumY = 0;
    int sumZ = 0;
    
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    int sumX = 0;
    int sumY = 0;
    int sumZ = 0;

    for (int i = 0; i < t; i++) {
        int x; cin >> x; int y; cin >> y; int z; cin >> z;
        sumX += x;
        sumY += y;
        sumZ += z;
    }
    // while (t--) {
    //     solve();
    // }
    string ans = (sumX == 0 && sumY == 0 && sumZ == 0) ? "YES"  : "NO";
    cout << ans;
    return 0;
}