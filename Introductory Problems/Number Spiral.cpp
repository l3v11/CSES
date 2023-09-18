#include <algorithm>
#include <cmath>
#include <cstring>
#include <iostream>
#include <map>
#include <set>
#include <string>
#include <vector>
using namespace std;

using ll = long long;
using str = string;

using pii = pair<int, int>;
using pll = pair<ll, ll>;
#define mp make_pair
#define f first
#define s second

using vi = vector<int>;
using vl = vector<ll>;
using vs = vector<str>;

#define sz(x) int((x).size())
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define pb push_back
#define eb emplace_back

const int mod = 1000000007;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;

    while (tc--) {
        ll y, x;
        cin >> y >> x;

        if (y > x) {
            if (y % 2 == 0) {
                cout << (y * y) - x + 1;
            } else {
                cout << (y - 1) * (y - 1) + x;
            }
        } else {
            if (x % 2 == 0) {
                cout << (x - 1) * (x - 1) + y;
            } else {
                cout << (x * x) - y + 1;
            }
        }

        cout << '\n';
    }

    return 0;
}