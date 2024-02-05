/**
  Author: Shahariar Rijon
  Date: 20/01/2024
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
  ll n, nof25 = 0, nof50 = 0; // nof25 = number of 25 ruble, nof50 = number of 50 ruble
  bool ans = true;

  cin >> n;

  for (ll i = 0; i < n; i++)
  {
    ll x;
    cin >> x;

    if (x == 25)
    {
      nof25++;
    }
    else if (x == 50)
    {
      nof50++;
      nof25--;
      if(nof25 < 0){
        ans = false;
        break;
      }
    }
    else
    {
      if (nof25 >= 1 && nof50 >= 1)
      {
        nof25--;
        nof50--;
      }
      else if (nof25 >= 3)
      {
        nof25 -= 3;
      }
      else
      {
        ans = false;
        break;
      }
    }
  }

  // ll mx = *max_element(a.begin(), a.end());
  if (ans)
    cout << "YES";
  else
    cout << "NO";

  return 0;
}