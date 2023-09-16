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

    cout << n << " ";

    while (n != 1) {
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = n * 3 + 1;
        }

        cout << n << " ";
    }

    cout << "\n";

    return 0;
}