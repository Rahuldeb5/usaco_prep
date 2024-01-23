#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
    // ios::sync_with_stdio(0); cin.tie(0);

    freopen("blocks.in", "r", stdin);
    freopen("blocks.out", "w", stdout);

    int n; cin >> n;
    vector<pair<string,string>> inputArr;

    for(int i=0; i<n; i++) {
        string x, y; cin >> x >> y;
        inputArr.push_back(make_pair(x, y));
    }

    vector<vector<int>> simArr(n*2, vector<int>(26,0));

    for(int i=0; i<inputArr.size(); i++) {
        for (char c : inputArr[i].first) {
            simArr[i*2][c-'a']++;
        }
        for(char c : inputArr[i].second) {
            simArr[i*2+1][c-'a']++;
        }
    }

    vector<vector<int>> finArr(n, vector<int>(26,0));

    for(int i=0; i<simArr.size(); i+=2) {
        for(int j=0; j<26; j++) {
            finArr[i/2][j] = max(simArr[i][j], simArr[i+1][j]);
        }
    }

    vector<int> ans(26, 0);

    for(int i=0; i<finArr.size(); i++) {
        for(int j=0; j<26; j++) {
            ans[j] += finArr[i][j];
        }
    }

    for(int i=0; i<ans.size(); i++) {
        cout << ans[i] << "\n";
    }

    return 0;
}

/*
Rahuldeb5
¯\_(ツ)_/¯
*/
