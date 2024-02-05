/**
  Author: Shahariar Rijon
  Date: 22/01/2024
**/

#include <bits/stdc++.h>
using namespace std;
#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long

int main()
{
    fastio;
    ll n;
    cin >> n;
    vector<ll> v;
    ll sum = 0;
    ll w[n], h;

    for (ll i = 0; i < n; i++)
    { 
        cin >> w[i] >> h;
        v.push_back(h);
        sum += w[i];
    }

    ll mx1 = *max_element(v.begin(), v.end());
    ll mxIndex = distance(v.begin(), max_element(v.begin(), v.end()));
    ll mx2 = 0;

    for (ll i = 0; i < n; i++){
        if (v[i] > mx2 && i != mxIndex)
            mx2 = v[i];
    }

    for (ll i = 0; i < n; i++)
    {
        ll width = sum - w[i];
        ll height;
        if(i == mxIndex) height = mx2;
        else height = mx1;

        cout << width * height << " ";
    }

    return 0;
}