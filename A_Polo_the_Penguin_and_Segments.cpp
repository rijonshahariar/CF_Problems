/**
  Author: Shahariar Rijon
  Date: 03/02/2024
**/

#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define gc getchar_unlocked
#define fo(i, n) for (ll i = 0; i < n; i++)
#define si(x) scanf("%d", &x)
#define sl(x) scanf("%lld", &x)
#define ss(s) scanf("%s", s)
#define pi(x) printf("%d\n", x)
#define pl(x) printf("%lld\n", x)
#define ps(s) printf("%s\n", s)
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, a) for (auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());
int rng(int lim)
{
    uniform_int_distribution<int> uid(0, lim - 1);
    return uid(rang);
}
int mpow(int base, int exp);
void ipgraph(int n, int m);
void dfs(int u, int par);

const int mod = 1'000'000'007;
const int N = 3e5, M = N;
//=======================

vi g[N];
int a[N];

bool isPrime(int n){for (ll i = 2; i < sqrt(n); i++){if (n % i == 0){return false;}}return true;}
int primeFactor(int n){vl prime_fctrs;for (ll i = 2; i <= sqrt(n); i++){while(n % i == 0){prime_fctrs.push_back(i);n /= i;}}if(n > 1) {prime_fctrs.push_back(n);}for(auto it : prime_fctrs){cout << it << " ";}}
void dfs(int u, int par){for (int v : g[u]) {if (v == par){continue;}dfs(v, u);}}
void ipgraph(int n, int m){int i, u, v;while (m--){cin >> u >> v;u--, v--;g[u].pb(v);g[v].pb(u);}}
int mpow(int base, int exp){base %= mod;int result = 1;while (exp > 0){if (exp & 1){result = ((ll)result * base) % mod;}base = ((ll)base * base) % mod;exp >>= 1;}return result;}
vector<ll> sieve(int n) {int*arr=new int[n+1]();vector<ll>v;for(int i=2;i<=n;i++)if(!arr[i]){v.pb(i);for(int j=2*i; j<=n; j+=i)arr[j]=1;} return v;} // vector<ll>primes=sieve(100000);
string int_to_str(ll x){string s;while(x){s+=(char)(x%10)+'0';x/=10;}reverse(all(s));return s;}
ll str_to_int(string s){ll n = stoi(s); return n;}
ll reverse_num(ll n){ ll tmp=n,ans=0,r;while(tmp){r=tmp%10;ans=ans*10+r;tmp/=10;}return ans;}


int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    
    ll n,k; cin >> n >> k;

    ll l,r,p = 0;

    fo(i,n){
        cin >> l >> r;
        p += (r - l + 1);
    }

    if(p % k == 0){
        cout << 0; return 0;
    }

    p = k - (p % k);

    cout << p;

    return 0;
}