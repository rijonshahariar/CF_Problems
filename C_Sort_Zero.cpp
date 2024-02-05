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
    ll t; cin >> t;
    while(t--){
        ll n; cin >> n;
        vector<ll> v(n);

        for(ll i = 0; i < n; i++){
            cin >> v[i];
        }

        map<ll, ll> f;

        for(ll i = 0; i < n; i++){
            if(f.find(v[i]) == f.end()){
                f[v[i]] = i;
            }
        }

        ll pos = 0;

        for(ll i = n - 1; i >= 1; i--){
            if(v[i - 1] > v[i]){
                pos = i - 1;
                break;
            }
        }

        set<ll> s;
        ll ans = f.size();

        for(ll i = n - 1; i >= pos; i--){
            if(f[v[i]] > pos){
                s.insert(v[i]);
            }
            else break;
        }

        ans -= s.size();

        cout << ans << endl;
    }
    return 0;
}