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

using pi = pair<int, int>;
using pl = pair<ll, ll>;
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

    int n;
    cin >> n;

    if (n == 1) cout << "1" << '\n';
    else if (n < 4) cout << "NO SOLUTION" << '\n';
    else {
        for (int i = 2; i <= n; i+=2) cout << i << " ";
        for (int i = 1; i <= n; i+=2) cout << i << " ";
    }

    cout << '\n';

    return 0;
}