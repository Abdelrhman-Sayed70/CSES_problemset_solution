#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false) , cin.tie(0) , cout.tie(0) 
#define ll long long
#define endl "\n"
#define vi vector<int> 
#define vl vector<ll> 
#define in(v) for(int i=0;i<v.size();i++) cin>>v[i];
#define out(v) for(int i=0;i<v.size();i++) cout << v[i] << " " ;
#define sr(V) sort(V.begin(),V.end()) ;
#define lp(var,n) for (ll var=0;var<n;var++)  
#define rv(V) reverse(V.begin(), V.end());
#define rt return 
#define yes cout <<"YES\n" 
#define no cout << "NO\n"
#define el cout << "\n" 
double pi = 2 * acos(0.0);
ll mod = 1e9 + 7;
void do_it() {
    int n; cin >> n; 
    vector<int>v(n); 
    for (auto& it : v) { cin >> it; }
    int last = v[0];
    ll cnt = 0;
    for (int i = 1; i < n; i++) {
        if (v[i] < last) { cnt += last - v[i] ; }
        else { last = v[i]; }
    }
    cout << cnt;
}
int main() {
    fast;
    int t = 1; 
    //cin >> t; 
    while (t--) {
        do_it();
    }
}