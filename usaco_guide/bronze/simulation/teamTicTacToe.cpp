#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
    // ios::sync_with_stdio(0); cin.tie(0);

    freopen("tttt.in", "r", stdin);
    freopen("tttt.out", "w", stdout);

    string one, two, three; cin >> one >> two >> three;

    vector<string> arr;

    arr.push_back(one); arr.push_back(two); arr.push_back(three);

    for(int i=0; i<3; i++) {
        string s; s += one[i]; s +=two[i]; s +=three[i];
        arr.push_back(s);
    }

    string diag; diag += one[0]; diag += two[1]; diag += three[2];
    arr.push_back(diag);
    diag = one[2]; diag += two[1]; diag += three[0];
    arr.push_back(diag);

    vector<char> oneWinner;
    vector<pair<char, char>> twoWinner;

    bool already = false;

    for(int i=0; i<arr.size(); i++) {
        if(arr[i][0] == arr[i][1] && arr[i][0] == arr[i][2]) {
            already = false;
            for(int j=0; j<oneWinner.size(); j++) {
                if(arr[i][0] == oneWinner[j]) {
                    already = true;
                    break;
                }
            }
            if(already == false) oneWinner.push_back(arr[i][0]);
        }

        if(arr[i][0] == arr[i][1] && arr[i][0] != arr[i][2]) {
            already = false;
            for(int j=0; j<twoWinner.size(); j++) {
                if(arr[i][0] == twoWinner[j].first && arr[i][2] == twoWinner[j].second ||
                   arr[i][0] == twoWinner[j].second && arr[i][2] == twoWinner[j].first) {
                    already = true;
                    break;
                }
            }
            if(already == false) twoWinner.push_back(make_pair(arr[i][0], arr[i][2]));
        }

        if(arr[i][0] == arr[i][2] && arr[i][0] != arr[i][1]) {
            already = false;
            for(int j=0; j<twoWinner.size(); j++) {
                if(arr[i][0] == twoWinner[j].first && arr[i][1] == twoWinner[j].second ||
                   arr[i][0] == twoWinner[j].second && arr[i][1] == twoWinner[j].first) {
                    already = true;
                    break;
                }
            }
            if(already == false) twoWinner.push_back(make_pair(arr[i][0], arr[i][1]));
        }

        if(arr[i][1] == arr[i][2] && arr[i][1] != arr[i][0]) {
            already = false;
            for(int j=0; j<twoWinner.size(); j++) {
                if(arr[i][1] == twoWinner[j].first && arr[i][2] == twoWinner[j].second ||
                   arr[i][1] == twoWinner[j].second && arr[i][2] == twoWinner[j].first) {
                    already = true;
                    break;
                }
            }
            if(already == false) twoWinner.push_back(make_pair(arr[i][1], arr[i][2]));
        }
    }
    cout << oneWinner.size() << "\n" << twoWinner.size();

    return 0;
}

/*
Rahuldeb5
¯\_(ツ)_/¯
*/
