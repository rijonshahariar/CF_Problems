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

ll round(ll a, ll b, ll x, ll y, ll n)
{
    ll res = min(n, a - x);
    n -= res;
    a -= res;
    res = min(n, b - y);
    b -= res;

    return a * b;
}

int main()
{
    fastio;
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b, x, y, n;
        cin >> a >> b >> x >> y >> n;

        ll ans1 = round(a,b,x,y,n);
        ll ans2 = round(b,a,y,x,n);

        cout << min(ans1, ans2) << endl;
    }
    return 0;
}