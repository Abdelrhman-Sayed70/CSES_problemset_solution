#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
#define fastIO ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0) 
#define ll long long
#define endl "\n"
#define out(v) for(auto it:v){cout<<it<<" ";}
#define rt return 
#define yes cout <<"YES\n" 
#define no cout << "NO\n"
#define el cout << "\n" 
#define all(v) v.begin(),v.end()
double pi = 2 * acos(0.0);
ll mod = 1e9 + 7;
void files() {
#pragma warning(disable : 4996).
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
//******* 
bool getbit(ll n, int idx) {
    return((n >> idx) & 1LL);
}
void do_it() {
    int n, x; cin >> n >> x;
    vector<int>v(n);
    for (auto& it : v) { cin >> it; }
    int right, left;
    left = n / 2;
    right = n - left;
    //unordered_map<int, int>mp;
    vector<int>sums; 
    for (ll i = 0; i < (1LL << right); i++) {
        ll sum = 0;
        for (int j = 0; j < right; j++) {
            if (getbit(i, j)) {
                sum += v[j + left];
            }
            if (sum > x) { break; }
        }
        if (sum <= x) { 
            //mp[sum]++;
            sums.push_back(sum);
        }
    }
    sort(all(sums));
    ll ans = 0;
    for (int i = 0; i < (1 << left); i++) {
        ll sum = 0;
        for (int j = 0; j < left; j++) {
            if (getbit(i, j)) {
                sum += v[j];
            }
            if (sum > x) { break; }
        }
        if (sum <= x) { 
            //ans += mp[x - sum]; 
            int lo = lower_bound(all(sums), x-sum)-sums.begin();
            int up = upper_bound(all(sums), x-sum)-sums.begin(); 
            ans += (up - lo);
        }
    }
    cout << ans;
}
//******* 
int main() {
    //files();
    fastIO;
    int t = 1;
    //cin >> t;
    for (int i = 1; i <= t; i++) {
        //cout << "Case #" << i << ": ";
        do_it();
    }
}