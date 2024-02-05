/**
  Author: Shahariar Rijon
  Date: 19/01/2024
**/

#include <bits/stdc++.h>
using namespace std;
#define fastio                  \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);
#define ll long long

int main()
{
  fastio;
  ll t;
  cin >> t;
  while (t--)
  {
    ll n, cnt = 0;
    cin >> n;
    vector<ll> a, b;

    for (ll i = 0; i < n; i++)
    {
      ll x;
      cin >> x;
      //auto it = find(a.begin(), a.end(), x);
      //if (it == a.end())
      //{
        a.push_back(x);
     // }
    }

    ll x = a[n - 1];

    for(ll i = n - 1; i >= 0; i--){
      if(a[i] > x) cnt++;
      x = min(a[i], x);
    }

    // if(a.size() == 2){
    //   cout << 1 << endl;
    //   continue;
    // }

    // b = a;
    // sort(b.begin(), b.end());

    // for (ll i = 0; i < a.size(); i++)
    // {
    //   if(a[i] != b[i]) cnt++;
    // }
    cout << cnt << endl;
  }
  return 0;
}