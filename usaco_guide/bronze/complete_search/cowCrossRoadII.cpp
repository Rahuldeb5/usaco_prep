#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
    // ios::sync_with_stdio(0); cin.tie(0);

    freopen("circlecross.in", "r", stdin);
    freopen("circlecross.out", "w", stdout);

    string input; cin >> input;

    string str;
    for(int i=0; i<input.size(); i++) {
        if(input[i] == input[i+1]) i++;
        else str += input[i];
    }

    int num {};

    for(int i=0; i<str.size(); i++) {
        string temp; int left, right;
        for(int j=i+1; j<str.size(); j++) {
            if(str[i] == str[j]) {
                temp = str.substr(i+1, j-i-1);
                left = i; right = j;
                break;
            }
        }

        string originalTemp = temp;

        sort(temp.begin(), temp.end());

        for(int j=0; j<temp.size(); j++) {
            if(temp[j] == temp[j+1]) j++;
            else num++;
        }

        originalTemp += str.substr(right+1, str.size()-right-1);
        str = originalTemp;
        
        i--;
    }

    cout << num;

    return 0;
}

/*
Rahuldeb5
¯\_(ツ)_/¯
*/
