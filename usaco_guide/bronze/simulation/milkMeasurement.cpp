#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
    // ios::sync_with_stdio(0); cin.tie(0);

    freopen("measurement.in", "r", stdin);
    freopen("measurement.out", "w", stdout);

    int n; cin >> n;
    vector<vector<int>> arr(n, vector<int>(3));

    int day, val;
    string name;

    for(int i=0; i<n; i++) {
        cin >> day >> name >> val;
        arr[i][0] = day; arr[i][2] = val;

        if(name == "Bessie") arr[i][1] = 0;
        if(name == "Mildred") arr[i][1] = 1;
        if(name == "Elsie") arr[i][1] = 2;
    }

    sort(arr.begin(), arr.end());

    vector<int> tempArr(3, 7), maxArr(3), prevArr(3, 1);

    int num {};

    for(int i=0; i<n; i++) {
        tempArr[arr[i][1]] += arr[i][2];

        int great = max({tempArr[0], tempArr[1], tempArr[2]});

        for(int j=0; j<3; j++) {
            if(tempArr[j] == great) {
                maxArr[j] = 1;
            }
            else {
                maxArr[j] = 0;
            }
        }

        for(int j=0; j<3; j++) {
            if(maxArr[j] != prevArr[j]) {
                num++;
                break;
            }
        }
        for(int j=0; j<3; j++) {
            prevArr[j] = maxArr[j];
        }
    }

    cout << num;


    return 0;
}

/*
Rahuldeb5
¯\_(ツ)_/¯
*/
