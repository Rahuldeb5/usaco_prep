#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
    // ios::sync_with_stdio(0); cin.tie(0);

    freopen("cownomics.in", "r", stdin);
    freopen("cownomics.out", "w", stdout);

    int n, m; cin >> n >> m;

    vector<string> spotArr(n), plainArr(n);

    for(int i=0; i<n; i++) {
        cin >> spotArr[i];
    }
    for(int i=0; i<n; i++) {
        cin >> plainArr[i];
    }

    int num {};

    for(int i=0; i<=m-3; i++) {
        for(int j=i+1; j<=m-2; j++) {
            for(int k=j+1; k<=m-1; k++) {
                vector<string> tempSpot, tempPlain;

                for(int x=0;x<n; x++) {
                    string s;
                    s += spotArr[x][i]; s+= spotArr[x][j]; s += spotArr[x][k];
                    tempSpot.push_back(s);
                }
                for(int x=0; x<n; x++) {
                    string s;
                    s += plainArr[x][i]; s+= plainArr[x][j]; s += plainArr[x][k];
                    tempPlain.push_back(s);
                }

                bool equal = false;

                for(int x=0; x<n; x++) {
                    for(int y=0; y<n; y++) {
                        if(tempSpot[x] == tempPlain[y]) {
                            equal = true;
                            break;
                        }
                    }
                    if(equal) break;
                }
                if(!equal) num++;     
            }
        }
    }

    cout << num;


    return 0;
}

/*
Rahuldeb5
¯\_(ツ)_/¯
*/
