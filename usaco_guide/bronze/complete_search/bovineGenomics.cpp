#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
    // ios::sync_with_stdio(0); cin.tie(0);

    freopen("cownomics.in", "r", stdin);
    freopen("cownomics.out", "w", stdout);

    int n, m; cin >> n >> m;

    vector<string> spotty(n), plain(n);

    for(int i=0; i<n; i++) {
        cin >> spotty[i];
    }
    for(int i=0; i<n; i++) {
        cin >> plain[i];
    }

    int num {}; bool diff = true;

    for(int i=0; i<m; i++) {
        string sStr, pStr;
        for(int j=0; j<n; j++) {
            sStr += spotty[j][i];
            pStr += plain[j][i];
        }
        diff = true;
        
        for(int j=0; j<sStr.size(); j++) {
            for(int k=0; k<sStr.size(); k++) {
                if(sStr[j] == pStr[k]) {
                    diff = false;
                    break;
                }
            }
        }

        if(diff) num++;
    }

    cout << num;

    return 0;
}

/*
Rahuldeb5
¯\_(ツ)_/¯
*/
