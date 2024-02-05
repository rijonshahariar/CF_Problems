/**
  Author: Shahariar Rijon
  Date: 24/01/2024
**/

#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base:: sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
const int N = 3e5+10;

int main()
{
    fastio;
    ll t; cin >> t;
    while(t--){
        ll n; cin >> n;
        string s; cin >> s;

        map<char,ll> cnt;
        ll mx = 0;

        for(ll i = 0; i < n; i++){
            cnt[s[i]]++;
            mx = max(mx, cnt[s[i]]);
        }

        
        //ll pos = distance(cnt.begin(), max_element(cnt.begin(), cnt.end()));

        // for(ll i = 96; i <= 122; i++){
        //     if(i != pos){
        //        mx -= cnt[i];
        //        cnt[pos] = mx;
        //        cnt[i] = 0;
        //     }
        //     mx = *max_element(cnt.begin(), cnt.end()); 
        //     pos = distance(cnt.begin(), max_element(cnt.begin(), cnt.end()));
        //     if(mx == 0) break;
        // }

        //cnt[97] = 0;
        ll ans;

        if(mx > n / 2){
            ans = n - (n - mx) * 2;
            /*if the mx is greater than (n / 2)
            then the string size will be size - multiple of the rest number of letters and 2
            imagine a string aaaaaaaaaaxxyyzzu the output string will be aaa
           */ 
            
        }
        else{
            ans = n % 2;
            /*else every other character will remove the 
            max characters and the answer will be the remainder of them
            like if a string is aaaabbbbb the resulting string will be b*/
        }

        cout << ans << endl;

    }
    return 0;
}