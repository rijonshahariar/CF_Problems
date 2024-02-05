/**
  Author: Shahariar Rijon
  Date: 27/01/2024
**/

#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base:: sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long

int c(int n, int k)
{
    int C[n + 1][k + 1];
    int i, j;
 
    // Calculate value of Binomial Coefficient
    // in bottom up manner
    for (i = 0; i <= n; i++) {
        for (j = 0; j <= min(i, k); j++) {
            // Base Cases
            if (j == 0 || j == i)
                C[i][j] = 1;
 
            // Calculate value using previously
            // stored values
            else
                C[i][j] = C[i - 1][j - 1] + C[i - 1][j];
        }
    }
 
    return C[n][k];
}

int main()
{
    fastio;
    ll t; cin >> t;
    while(t--){
        ll n,m,k, ans = 0; 
        cin >> n >> m >> k;

        vector<ll> a(n), b(n), f;
        ll sum = 0;

        for(ll i = 0; i < m; i++){
            cin >> a[i] >> b[i] >> f[i];
            sum += f[i];
        }

        for(ll j = 1; j <= k; j++){
            ans=pow(n*(n-1)/2,k-j) * c(k,j) * (2*sum+j*m-m) *j/2;
        }

        cout << ans << endl;
    }
    return 0;
}