#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);

    // freopen(".in", "r", stdin);
    // freopen(".out", "w", stdout);

    int m, n, k; cin >> m >> n >> k;

    vector<vector<char>> arr(m, vector<char> (n));

    for(int i=0; i<m; i++) {
        string s; cin >> s;
        
        for(int j=0; j<n; j++) {
            arr[i][j] = s[j];
        }
    }

    return 0;
}

/*
Rahuldeb5
¯\_(ツ)_/¯
*/
