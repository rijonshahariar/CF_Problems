/**
  Author: Shahariar Rijon
  Date: 23/01/2024
**/

#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base:: sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long

int main()
{
    fastio;
    ll n; cin >> n;

    vector<ll> v(n);
    ll c1 = 0, c2 = 0, c3 = 0, c4 = 0;
    ll count = 0;

    for(ll i = 0; i < n; i++){
        cin >> v[i];
        if(v[i] == 1) c1++;
        else if(v[i] == 2) c2++;
        else if(v[i] == 3) c3++;
        else if(v[i] == 4) c4++;
    }
    count += c4;

    while(c1 != 0 && c3 != 0){
        c3--; c1--;
        count++;
    }

    if(c1 == 0 && c3 != 0) count += c3;

    count += c2 / 2;
    if(c2 % 2 != 0){
        if(c1 <= 2){
            count++;
            c1 = 0;
        }
        else{
            c1 -= 2;
            count++;
        }
    }

    if(c1 != 0){
        count += c1 / 4;
        if(c1 % 4 != 0) count++;
    }

    

    cout << count << endl;



    return 0;
}