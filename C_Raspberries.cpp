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
        int n,k; cin >> n >> k;
        vector<int> v(n);
        ll evens = 0;

        for(ll i = 0; i < n; i++){
            cin >> v[i];
            if(v[i] % 2 == 0) evens++;
        }

        int ans = 6;

        //sort(v.begin(), v.end());

        for(ll i = 0; i < n; i++){
            if(v[i] % k == 0){
                ans = 0;
            }
            ans = min(ans, k - (v[i] % k));
        }

        if(k == 4){
            if(evens >= 2) ans = 0;
            else if(evens == 1) ans = min(ans , 1);
            else ans = min(ans , 2);
        }

        cout << ans << endl;
        




    }
    return 0;
}