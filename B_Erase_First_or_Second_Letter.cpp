/**
  Author: Shahariar Rijon
  Date: 24/01/2024
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
        string s; cin >> s;
        set<char> x;

        ll count = 0;

        for(ll i = 0; i < n; i++){
            x.insert(s[i]);
            count += x.size();
        }

        cout << count << endl;

    }
    return 0;
}