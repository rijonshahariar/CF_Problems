/**
  Author: Shahariar Rijon
  Date: 27/01/2024
**/

#include <bits/stdc++.h>
using namespace std;
#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long

int main()
{
    fastio;
    ll t;
    cin >> t;

    while (t--) {
        ll x, n;
        cin >> x >> n;

        
        set<int> s;

        for (ll i = 1; i <= sqrt(x); i++) {
            if (x % i == 0) {
                s.insert(x / i);
                s.insert(i);
            }
        }

        auto it = s.lower_bound(x / n);


        if (*it > x / n) {
            it--;
        }

        cout << *it << endl;
    }

    return 0;
}