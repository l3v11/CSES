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
#define all(x) x.begin(), x.end()
#define pb push_back

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;

    vector<ll> num(n);

    for (ll i = 0; i < n; i++) {
        cin >> num[i];
    }

    ll sum = 0;
    for (ll i = 0; i < n - 1; i++) {
        if (num[i] > num[i + 1]) {
            sum += (num[i] - num[i + 1]);
            num [i + 1] = num[i];
        }
    }

    cout << sum << '\n';

    return 0;
}