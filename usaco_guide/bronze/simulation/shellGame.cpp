#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
    // ios::sync_with_stdio(0); cin.tie(0);

    freopen("shell.in", "r", stdin);
    freopen("shell.out", "w", stdout);

    int n; cin >> n;
    vector<vector<int>> arr(n, vector<int>(3));

    for(int i=0; i<n; i++) {
        for(int j=0; j<3; j++) {
            cin >> arr[i][j];
        }
    }

    int num {}, ans {};

    for(int i=1; i<=3; i++) {
        num = i;
        int temp {};

        for(int j=0; j<n; j++) {
            if(arr[j][0] == num) {
                num = arr[j][1];
            }
            else if(arr[j][1] == num) {
                num = arr[j][0];
            }

            if(num == arr[j][2]) {
                temp++;
            }
        }
        ans = max(ans, temp);
    }

    cout << ans;

    return 0;
}

/*
Rahuldeb5
¯\_(ツ)_/¯
*/
