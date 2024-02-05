/**
  Author: Shahariar Rijon
  Date: 26/01/2024
**/

#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base:: sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long

const int N = 11000000;

ll sums(ll n){
    ll sum = 0;
    while(n){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main()
{
    fastio;
    ll n; cin >> n;
    ll x = 0;

    for(ll i = 19; i < N; i+=9){
        if(sums(i) == 10){
            x++;
        }

        if(x == n){
            cout << i << endl;
            break;
        }

    }
    
    return 0;
}