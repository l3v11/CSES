#include <algorithm>
#include <cmath>
#include <cstring>
#include <iostream>
#include <map>
#include <set>
#include <string>
#include <vector>
using namespace std;

#define ll long long
#define mod 1000000007
#define pb push_back
#define all(x) x.begin(), x.end()

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    int mx = 1, cnt = 1;
    for (int i = 1; i < s.size(); i++) {
        if (s[i] != s[i - 1]) {
            mx = max(mx, cnt);
            cnt = 0;
        }

        cnt++;
    }

    cout << max(mx, cnt) << "\n";

    return 0;
}