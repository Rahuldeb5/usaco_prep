#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
    // ios::sync_with_stdio(0); cin.tie(0);

    freopen("lifeguards.in", "r", stdin);
    freopen("lifeguards.out", "w", stdout);

    int n; cin >> n;

    vector<pair<int,int>> arr;

    for(int i=0; i<n; i++) {
        int x, y; cin >> x >> y;
        arr.push_back(make_pair(x, y));
    }
    sort(arr.begin(), arr.end());
   
    int sum {}, low = 1001;

    for(int i=0; i<arr.size(); i++) {
        int num = arr[i].second - arr[i].first;
        for(int j=0; j<arr.size(); j++) {
            if(i != j) {
                if(arr[i].first > arr[j].first && arr[i].first < arr[j].second) {
                    num -= arr[j].second - arr[i].first;
                }
                if(arr[i].second > arr[j].first && arr[i].second < arr[j].second) {
                    num -= arr[i].second - arr[j].first;
                }
            }
        }
        if(num >= 0) low = min(low, num);
    }

    for(int i=1; i<=1000; i++) {
        for(int j=0; j<arr.size(); j++) {
            if(i > arr[j].first && i <= arr[j].second) {
                sum++;
                break;
            }
        }
    }

    cout << sum - low;

    return 0;
}

/*
Rahuldeb5
¯\_(ツ)_/¯
*/
