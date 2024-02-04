#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);

    // freopen(".in", "r", stdin);
    // freopen(".out", "w", stdout);

    int n; cin >> n;
    vector<pair<int, char>> arr;

    char c; int p;

    for(int i=0; i<n; i++) {
        cin >> c >> p;
        arr.push_back(make_pair(p, c));
    }

    sort(arr.begin(), arr.end());

    int num = 1001;

    for(int i=0; i<arr.size(); i++) {
        int low = arr[i].first-1; int high = arr[i].first+1;
        int liars {};
        
        if(arr[i].second == 'L') {
            for(int j=0; j<arr.size(); j++) {
                if(arr[j].second == 'G') {
                    if(low < arr[j].first) {
                        liars++;
                    }
                }
                else if(arr[j].second == 'L') {
                    if(low > arr[j].first) {
                        liars++;
                    }
                }
            }

            num = min(num, liars);
            liars = 0;
        }

        if(arr[i].second == 'G') {
            for(int j=0; j<arr.size(); j++) {
                if(arr[j].second == 'G') {
                    if(high < arr[j].first) {
                        liars++;
                    }
                }
                else if(arr[j].second == 'L') {
                    if(high > arr[j].first) {
                        liars++;
                    }
                }
            }

            num = min(num, liars);
        }
    }

    cout << num;

    return 0;
}

/*
Rahuldeb5
¯\_(ツ)_/¯
*/
