#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
    // ios::sync_with_stdio(0); cin.tie(0);

    freopen("herding.in", "r", stdin);
    freopen("herding.out", "w", stdout);

    int x, y, z; cin >> x >> y >> z;

    if(y == x+1 && z == y+1) {
        cout << 0 << "\n" << 0;
        return 0;
    }

    if(y-x == 2 || z-y == 2) {
        cout << 1 << "\n";
    }
    else {
        cout << 2 << "\n";
    }

    cout << max({y-x, z-y})-1;

    return 0;
}

/*
Rahuldeb5
¯\_(ツ)_/¯
*/
