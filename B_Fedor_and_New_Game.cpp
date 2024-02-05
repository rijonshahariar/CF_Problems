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
    ll n,m,k; cin >> n >> m >> k;
    vector<ll> v(m + 5);
    
    for(ll i = 1; i <= m + 1; i++){
        cin >> v[i];
    }

    ll count = 0;

    for(ll i = 1; i < m + 1; i++){
        ll x = v[i] ^ v[m + 1];

        if(bitset<32>(x).count() <= k) count++;
    }

    cout << count << endl;



    return 0;
}