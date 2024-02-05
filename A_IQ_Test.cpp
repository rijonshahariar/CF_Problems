/**
  Author: Shahariar Rijon
  Date: 29/01/2024
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
  vector<string> s(5);

  for (ll i = 0; i < 4; i++)
  {
    cin >> s[i];
  }

  // ll w = count(s[0].begin(), s[0].end(0), )
  ll cnt = 0;

  for (ll i = 0; i < 3; i++)
  {
    for (ll j = 0; j < 3; j++)
    {
      map<char,int> f;

      f[s[i][j]]++;
      f[s[i][j+1]]++; 
      f[s[i+1][j]]++; 
      f[s[i+1][j+1]]++;

      if(f['#'] <= 1 || f['.'] <= 1) {
        cout << "YES";
        return 0;
      }
    }
  }
  cout << "NO";

  return 0;
}