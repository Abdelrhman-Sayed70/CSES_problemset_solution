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
//***************************************************************************************************
void do_it() {
    string s , ans; cin >> s;
    map<char, int>mp;
    for (int i = 0; i < s.size(); i++) {
        mp[s[i]]++;
    }
    int cnt = 0; 
    for (auto it : mp) {
        cnt += it.second & 1;
    }
    if ((s.size() & 1 and cnt != 1) or (s.size() % 2 == 0 and cnt != 0)) { cout << "NO SOLUTION"; rt; }
    char ch = '?';
    for (auto it : mp) {
        if (it.second & 1) {
            ch = it.first;
            it.second--;
            ans.append(it.second / 2, it.first);
        }
        else {
            ans.append(it.second / 2, it.first);
        }
    }
    string tmp = ans; 
    if (ch != '?') { ans += ch; }
    reverse(tmp.begin(), tmp.end());
    ans += tmp;
    cout << ans;
}   
//***************************************************************************************************
int main() {
    fast;
    int t = 1;
    //cin >> t; 
    while (t--) {
        do_it();
    }
}