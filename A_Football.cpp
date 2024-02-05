/**
  Author: Shahariar Rijon
  Date: 25/01/2024
**/

#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base:: sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long

int main()
{
    fastio;
    ll n; cin >> n;
    map<string,ll> mp;
    ll mx = 0;

    while(n--){
        string s; cin >> s;
        mp[s]++;
        mx = max(mx, mp[s]);
    }

    for(auto& t : mp){
        if(t.second == mx) cout << t.first;
    }
    return 0;
}