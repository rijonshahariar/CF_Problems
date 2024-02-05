/**
  Author: Shahariar Rijon
  Date: 26/01/2024
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

        map<string, bool> mp;
        ll n;
        cin >> n;
        vector<string> v(n);

        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]] = true;
        }

        for (ll i = 0; i < n; i++)
        {
            ll f = 0;
            for (ll j = 1; j < v[i].size(); j++)
            {
                string s1 = v[i].substr(0, j);
                string s2 = v[i].substr(j, v[i].size() - 1);
                if (mp[s1] && mp[s2])
                {
                    f = 1;
                    break;
                }
            }

            cout << f;
        }
        cout << endl;
    }
    return 0;
}