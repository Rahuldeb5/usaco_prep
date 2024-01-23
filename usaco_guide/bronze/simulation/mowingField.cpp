#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
    // ios::sync_with_stdio(0); cin.tie(0);

    freopen("mowing.in", "r", stdin);
    freopen("mowing.out", "w", stdout);

    vector<vector<int>> arr(2001, vector<int>(2001, -1));
    arr[1000][1000] = 0;

    int n; cin >> n;

    char c; int step;

    int xcor = 1000, ycor = 1000, time {}, ans = 1001;

    for(int i=0; i<n; i++) {
        cin >> c; cin >> step;
        switch (c) {
        case 'N':
            for(int i=0; i<step; i++) {
                ycor++;
                time++;
                if(arr[xcor][ycor] == -1) {
                    arr[xcor][ycor] = time;
                }
                else {
                    ans = min(ans, time - arr[xcor][ycor]);
                    arr[xcor][ycor] = time;
                }
            }
            break;
        
        case 'S':
            for(int i=0; i<step; i++) {
                ycor--;
                time++;
                if(arr[xcor][ycor] == -1) {
                    arr[xcor][ycor] = time;
                }
                else {
                    ans = min(ans, time - arr[xcor][ycor]);
                    arr[xcor][ycor] = time;
                }
            }
            break;

        case 'E':
            for(int i=0; i<step; i++) {
                xcor++;
                time++;
                if(arr[xcor][ycor] == -1) {
                    arr[xcor][ycor] = time;
                }
                else {
                    ans = min(ans, time - arr[xcor][ycor]);
                    arr[xcor][ycor] = time;
                }
            }
            break;

        case 'W':
            for(int i=0; i<step; i++) {
                xcor--;
                time++;
                if(arr[xcor][ycor] == -1) {
                    arr[xcor][ycor] = time;
                }
                else {
                    ans = min(ans, time - arr[xcor][ycor]);
                    arr[xcor][ycor] = time;
                }
            }
            break;

        }


    }
    if(ans == 1001) cout << -1;
    else cout << ans;

    return 0;
}

/*
Rahuldeb5
¯\_(ツ)_/¯
*/
