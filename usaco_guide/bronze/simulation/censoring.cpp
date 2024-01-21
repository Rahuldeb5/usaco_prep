#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
    // ios::sync_with_stdio(0); cin.tie(0);

    freopen("censor.in", "r", stdin);
    freopen("censor.out", "w", stdout);

    string s, t; cin >> s >> t;
    string temp;

    for(int i=0; i<s.size(); i++) {
        temp += s[i];
        int size = (int)(temp.size()) - (int)(t.size());

        if(size >= 0) {
            if(temp.substr(temp.size()-t.size(), t.size()) == t) {
                temp = temp.substr(0, temp.size()-t.size());
            }
        }
        
    }

    cout << temp;

    return 0;
}

/*
Rahuldeb5
¯\_(ツ)_/¯
*/

