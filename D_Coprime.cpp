/**
  Author: Shahariar Rijon
  Date: 22/01/2024
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
      ll n, ans = -1, res; cin >> n;

      vector<ll> v(1001, -1);

      for(ll i = 1; i <= n; i++){
        ll x; cin >> x;
        v[x] = i;
      }

      for(ll i = 1; i <= 1000; i++){
        for(ll j = 1; j <= 1000; j++){
          if(v[i] != -1 && v[j] != -1){
            res = __gcd(i,j);
          }

          if(res == 1){
            ans = max(ans, v[i] + v[j]);
          }

        }
      }

      cout << ans << endl;
    }
    return 0;
}