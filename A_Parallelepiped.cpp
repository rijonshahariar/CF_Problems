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
    ll a,b,c;
    cin >> a >> b >> c;
    double ab = sqrt(a * c / b); 
    double bc = sqrt(a * b / c);
    double ac = sqrt(b * c / a);

    double sum = ab + bc + ac;

    ll ans = 4 * sum;
    cout << ans;
    return 0;
}