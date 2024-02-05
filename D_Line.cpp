/**
  Author: Shahariar Rijon
  Date: 28/01/2024
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
        string s;
        cin >> s;
        vector<ll> v;
        ll sum = 0;

        ll md = n / 2;

        // if(n % 2 != 0){
        //     md += 1;
        // }

        for(ll i = 0; i < n; i++){
            if(s[i] == 'R'){
                v.push_back(i - (n - 1 - i));
                sum += n - 1 - i;
            }
            else{
                v.push_back((n - 1 - i) - i);
                sum += i;
            }       
        }

        sort(v.begin(), v.end(), greater<int>());

        for(auto it : v){
            if(it > 0) sum += it;
            cout << sum << " ";
        }
        cout << endl;
    }
    return 0;
}