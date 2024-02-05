/**
  Author: Shahariar Rijon
  Date: 21/01/2024
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
    ll n, m;
    cin >> n;
    vector<ll> arr(n + 5), v(n + 5), p(n + 5);

    ll visya = 0, petya = 0;

    for (ll i = 0, j = n - 1; i < n, j >= 0; i++, j--)
    {
        cin >> arr[i];
        v[arr[i]] = i + 1;
        p[arr[i]] = j + 1;
    }

    cin >> m;
    
    while(m--){
        ll q; cin >> q;
        visya += v[q];
        petya += p[q]; 
    }
    

    cout << visya << " " << petya;

    return 0;
}