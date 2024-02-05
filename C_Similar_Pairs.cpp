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
    ll t; cin >> t;
    while(t--){
        ll n; cin >> n;
        vector<ll> v(n);
        bool isExists = false;

        ll evens = 0, odds = 0;

        for(ll i = 0; i < n; i++){
            cin >> v[i];
            if(v[i] % 2 == 0) evens++;
            else odds++;
        }

        sort(v.begin(), v.end());

        if(evens % 2 == 0 || odds % 2 == 0) isExists = true;

        else{
        for(ll i = 0; i < n - 1; i++){
           if(abs(v[i] - v[i + 1]) == 1) isExists = true;
        } 
        }
        


        if(isExists) cout << "YES\n";
        else cout << "NO\n";

    }
    return 0;
}