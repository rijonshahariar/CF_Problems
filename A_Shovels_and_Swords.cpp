/**
  Author: Shahariar Rijon
  Date: 19/01/2024
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
      ll a,b; cin >> a >> b;
      ll ans = 0;

      if( a >= 2 * b) ans = b;
      else if(b >= 2 * a) ans = a;
      else ans = ( a + b) / 3;

      cout << ans << endl;
     }
    return 0;
}