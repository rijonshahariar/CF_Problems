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
      string s; cin >> s;
      ll stack = 0;


      ll size = s.size();

      for(ll i = 0; i < size; i++){
        if(stack && s[i] == 'B') stack--;
        else stack++;
      }

      cout << stack << endl;
    }
    return 0;
}