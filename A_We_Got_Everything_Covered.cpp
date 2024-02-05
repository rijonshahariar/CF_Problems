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
    fastio;
    ll t; cin >> t;
    while(t--){
        ll n, k; cin >> n >> k;
        string s;

        while(n--){
            for(char i = 0; i < 26; i++){
                char c = i + 'a';
                if(i >= k) break;
                s.push_back(c);
            }
        }

        cout << s << endl;
    }
    return 0;
}