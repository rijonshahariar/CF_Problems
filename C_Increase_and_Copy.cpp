/**
  Author: Shahariar Rijon
  Date: 30/01/2024
**/

#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base:: sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long

int main()
{
    fastio;
    ll t; cin >> t;
    while(t--){
        ll n; cin >> n;
        ll x = sqrt(n);

        n -= x;
        ll s = n / x;

        if(n % x != 0) s++;

        ll ans = s + (x - 1);

        cout << ans << endl;
    }
    return 0;
}