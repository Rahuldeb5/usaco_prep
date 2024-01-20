#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
 
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
 
    int t; cin >> t;
 
    while(t-- > 0) {
        ll n, k; cin >> n >> k;
 
        if(k > 28) {
            cout << 0 << "\n";
            continue;
        }
 
        ll a, aprev, anext;
        aprev = 0; anext = 1;
 
        for(int i=3; i<=k; i++) {
            a = aprev + anext;
            aprev = anext; anext = a;
        }
        // NOTE: a = b(from by)   AND   aprev = a(from ax);
        ll num {};
 
        for(ll i=0; i<=n/aprev; i++) {
            ll temp = n;
            temp -= (aprev*i);
 
            if(((temp % a) == 0) && ((temp / a) >= i)) {
                num++;
            }
        }
        cout << num << "\n";
    }
}
 
/*
Rahuldeb5
¯\_(ツ)_/¯
*/
