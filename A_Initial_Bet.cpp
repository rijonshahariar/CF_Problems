/**
  Author: Shahariar Rijon
  Date: 26/01/2024
**/

#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base:: sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long

int main()
{
    fastio;
    ll c1, c2, c3, c4, c5;
    cin >> c1 >> c2 >> c3 >> c4 >> c5;

    ll sum = c1 + c2 + c3 + c4 + c5;
    ll ans;

    if(sum % 5 == 0){
        ans = sum / 5;
    }
    else ans = -1;

    if(ans == 0) ans = -1;

    cout << ans << endl;

    return 0;
}