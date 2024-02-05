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
        ll n; cin >> n;
        string s; cin >> s;

        bool bad = false;

        ll cB = 0, cR = 0, cW = 0;
        vector<ll> arr(n);
        
        ll pos = 0;

        while(pos < s.size()){
            ll nextW = s.find('W', pos);
            string r = s.substr(pos, nextW - pos);

            bool b1 = (r.find('R') != -1);
            bool b2 = (r.find('B') != -1);

            if(!b1 && b2 || b1 && !b2){
                bad = true;
                break;

            }

            if(nextW == -1) break;

            pos = nextW + 1;

        }

        if(bad) cout << "NO";
        else cout << "YES";
        cout << endl;
    }
    return 0;
}