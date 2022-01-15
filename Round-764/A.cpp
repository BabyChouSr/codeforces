#include <bits/stdc++.h>
#include<stdio.h>

#define ll long long;

using namespace std;

void solve() {
    int n;
    cin >> n;
    // vector <int> arr(n);
    int min_arr = INT_MAX;
    int max_arr = INT_MIN;
    for (int i = 0; i < n; i++) {
        int num; cin >> num;
        min_arr = min(min_arr, num);
        max_arr = max(max_arr, num);
    }
    cout << (max_arr - min_arr) << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}