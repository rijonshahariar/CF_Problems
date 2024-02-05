/**
  Author: Shahariar Rijon
  Date: 21/01/2024
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
        ll n, k;
        cin >> n >> k;
        vector<ll> v(n), pref(n + 1, 0);
        ll sum = 0;

        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        sort(v.begin(), v.end());

        //pref[0] = v[0];
        for (ll i = 0; i < n; i++)
            pref[i + 1] = pref[i] + v[i];

        for(ll i = 0; i <= k; i++){
            sum = max(sum, pref[n - i] - pref[2 * (k - i)]);
        }

        // for(ll i = 0; i < n; i++){
        //     cout << pref[i] << " ";
        // }

        cout << sum << endl;
    }
    return 0;
}