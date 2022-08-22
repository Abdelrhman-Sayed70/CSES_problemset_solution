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
    /*
        How to find whether an array can be divided into two equal-sum parts ? 
        first check is simple. If sum of all the elements of the array is odd then it cannot be divided in two parts with equal sum.
        But, when the total sum of array is even (say, totalSum), then we have to check if we can find a subset of array with sum= totalSum/2. This is the challenging part. So our problem reduces to:
        Find the subset of array with sum = totalSum/2
    */
    ll n; 
    cin >> n; 
    ll sumall = n * (n + 1) / 2;
    if (sumall & 1) { cout << "NO"; rt; }
    cout << "YES\n";
    ll halfsum = sumall / 2;
    vector<int>a,b;
    ll sum = 0; 
    int ref = n;
    map<int, int>mp;
    while (sum<halfsum) {
        if (sum + ref < halfsum) {
            sum += ref;
            a.push_back(ref);
            mp[ref] = 1;
            ref--;
        }
        else {
            a.push_back(halfsum - sum);
            mp[ halfsum - sum] = 1;
            break;
        }
    }
    for (int i = 1; i <= ref; i++) {
        if (!mp[i]) { b.push_back(i); }
    }
    cout << a.size(); el; 
    out(a); el; 
    cout << b.size(); el; 
    out(b);
}
int main() {
    fast;
    int t = 1; 
    //cin >> t; 
    while (t--) {
        do_it();
    }
}