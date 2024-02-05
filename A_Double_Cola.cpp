/**
  Author: Shahariar Rijon
  Date: 19/01/2024
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
    ll n;
    cin >> n;
    ll i;

    for (i = 1; i * 5 < n; i *= 2)
    {
        n -= i * 5;
    }

    ll x = (n - 1) / i;

    if (x == 0)
        cout << "Sheldon";
    else if (x == 1)
        cout << "Leonard";
    else if (x == 2)
        cout << "Penny";
    else if (x == 3)
        cout << "Rajesh";
    else
        cout << "Howard";
    return 0;
}
