/**
  Author: Shahariar Rijon
  Date: 23/01/2024
**/

#include <bits/stdc++.h>
using namespace std;
#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long
const int N = 1e5+10;

int main()
{
    fastio;
    ll n, m;
    cin >> n >> m;
    vector<int> v(N), d(N, 0), a(N, 0);

    for (ll i = 1; i <= n; i++)
    {
        cin >> v[i];
    }

    for (ll i = n; i >= 1; i--)
    {
         if (a[v[i]] == 0)
         {
             d[i]++;
         }
        a[v[i]] = 1;
    }

    for (ll i = n; i >= 1; i--)
    {
        d[i] += d[i + 1];
        //cout << d[i] << " ";
    }

    while (m--)
    {
        ll x;
        cin >> x;
        cout << d[x] << endl;
    }
    return 0;
}