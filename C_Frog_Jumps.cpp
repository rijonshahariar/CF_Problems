/**
  Author: Shahariar Rijon
  Date: 21/01/2024
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
        string s; cin >> s;
        ll ans = 0;
        vector<ll> v;

        v.push_back(0);
        for(ll i = 0; i < s.size(); i++){
            if(s[i] == 'R') v.push_back(i + 1);
        }
        v.push_back(s.size() + 1);

        for(ll i = 0; i < v.size() - 1; i++){
            //cout << v[i] << endl;
            ans = max(ans, (v[i + 1] - v[i]));
        }

        cout << ans<<  endl;
    }
    return 0;
}