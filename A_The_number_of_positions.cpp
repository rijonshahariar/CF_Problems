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
    ll n,a,b; cin>>n>>a>>b;
    ll avlabl = n - a;

    if(avlabl > b) avlabl = b + 1;

    cout << avlabl;
    return 0;
}