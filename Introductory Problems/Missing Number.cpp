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
#define pb push_back
#define all(x) x.begin(), x.end()

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;

    ll num, sum = 0;
    for (ll i = 1; i < n; i++) {
        cin >> num;
        sum += num;
    }

    cout << n * (n + 1) / 2 - sum << "\n";

    return 0;
}