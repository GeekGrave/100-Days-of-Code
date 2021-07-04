// Problem: C - Fair Candy Distribution
// Contest: AtCoder - AtCoder Beginner Contest 208
// URL: https://atcoder.jp/contests/abc208/tasks/abc208_c
// Memory Limit: 1024 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int             long long
#define vll             vector<int>
#define mll             map<int,int>
#define pll             pair<int,int>
#define vpll            vector<pair<int,int>>
#define pb              push_back
#define mp              make_pair
#define F               first
#define S               second
#define to_low(s)       transform(s.begin(), s.end(), s.begin(), ::tolower);//convert string to lowercase
#define to_up(s)        transform(s.begin(), s.end(), s.begin(), ::toupper);//convert string to uppercase
#define popcount        __builtin_popcount     //used to count number of set bits in a integer
#define llpopcount      __builtin_popcountll
#define f(i,n)          for(int i=0;i<n;i++)
#define fin(i,c,n)      for(int i=c;i<n;i++)
#define fer(i,c,n)      for(int i=c;i>=n;i--)
#define fill(a, x)      memset(a, x, sizeof(a))
#define mod             1000000007
#define no              cout<<"NO\n"
#define yes             cout<<"YES\n"
#define ln              cout<<"\n";

void solve(){
    int n,k;
    cin>>n>>k;
    int ar[n];
    mll m;
    f(i,n) cin>>ar[i],m[ar[i]]=i;
    int ans = k/n;
    vll v(n);
    for(int i=0;i<n;i++){
    	v[i] = ans;
    }

    int rem = k%n;
    // cout<<rem<<endl;
    for(auto i:m){
    	if(rem==0) break;
    	v[i.S]++;
    	rem--;
    	
    }
    for(auto i:v){
    	cout<<i<<endl;
    }
}

signed main(){
    ios_base::sync_with_stdio(0); 
    cin.tie(0); cout.tie(0);

    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
    return 0;
}