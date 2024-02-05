/**
  Author: Shahariar Rijon
  Date: 27/01/2024
**/

#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base:: sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long

int main()
{
    // 18 mnts
    fastio;
    ll t; cin >> t;
    while(t--){
        ll l, r, n;
        cin >> n >> l >> r;

        vector <int> s;
        bool isOk = true;

        for(ll i = 1; i <= n; i++){
            ll x = i * ((l - 1) / i + 1);
            s.push_back(x);

            if(x > r){
                isOk = false;
                break;
            }
            
        }

        //ll mx = *max_element(s.begin(), s.end());

        if(!isOk){
            cout << "NO\n";
            continue;
        }

        else{
            cout << "YES\n";
        }

        for(auto& it : s){
            cout << it << " ";
        }
        cout << endl;
    }
    return 0;
}