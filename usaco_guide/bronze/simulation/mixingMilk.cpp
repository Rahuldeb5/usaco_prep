#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
    // ios::sync_with_stdio(0); cin.tie(0);

    freopen("mixmilk.in", "r", stdin);
    freopen("mixmilk.out", "w", stdout);

    vector<int> capArr(3), simArr(3);
    
    for(int i=0; i<3; i++) {
        cin >> capArr[i] >> simArr[i];
    }

    int a {}, b {};

    for(int i=0; i<100; i++) {
        a = i%3; b = (a+1)%3;

        if(simArr[a] + simArr[b] > capArr[b]) {
            simArr[a] = simArr[a] + simArr[b] - capArr[b];
            simArr[b] = capArr[b];
        }
        else {
            simArr[b] = simArr[a] + simArr[b];
            simArr[a] = 0;
        }
    }

    for(int i=0; i<3; i++) {
        cout << simArr[i] << "\n";
    }

    return 0;
}

/*
Rahuldeb5
¯\_(ツ)_/¯
*/
