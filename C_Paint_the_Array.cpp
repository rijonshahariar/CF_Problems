/**
  Author: Shahariar Rijon
  Date: 22/01/2024
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
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> v(n);
        ll ans = 0;
        ll odds = 0, evens = 0;

        bool beautiful = true;

        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        for (ll i = 0; i < n; i += 2)
            evens = __gcd(evens, v[i]);
        for (ll i = 1; i < n; i += 2)
            odds = __gcd(odds, v[i]);

        for (ll i = 0; i < n; i += 2)
        {
            if (v[i] % odds == 0)
            {
                beautiful = false;
                break;
            }
        }

        if (beautiful)
        {
            cout << odds << endl;
        }
        else
        {
            beautiful = true;

            for (ll i = 1; i < n; i += 2)
            {
                if (v[i] % evens == 0)
                {
                    beautiful = false;
                    break;
                }
            }
            if (beautiful)
            {
                cout << evens << endl;
            }
            else
                cout << 0 << endl;
        }
    }
    return 0;
}