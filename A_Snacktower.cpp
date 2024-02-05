/**
  Author: Shahariar Rijon
  Date: 29/01/2024
**/

#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base:: sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long

int main()
{
    fastio;
    ll n; cin >> n;
    vector <ll> v(n); vector<bool> has(n + 1, false);

    ll mx = n;

    for(ll i = 0; i < n; i++){
      cin >> v[i];
      has[v[i]] = true;

      while(has[mx]){
        cout << mx << " ";
        mx--;
      }

      cout << endl;
    }
    return 0;
}