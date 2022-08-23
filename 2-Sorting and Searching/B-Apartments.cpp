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
    // n applicant , m free apartment 
    int n, m; ll k;
    cin >> n >> m >> k; 
    vector<ll>applicant(n), appartment(m); 
    for (int i = 0; i < n; i++) {
        // desired appartment size for each applicant  
        cin >> applicant[i];
    }
    for (int i = 0; i < m; i++) {
        // each appartment size  
        cin >> appartment[i];
    }
    sort(applicant.begin(), applicant.end());
    sort(appartment.begin(), appartment.end());
    int j = 0;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        ll a = applicant[i] - k; 
        ll b = applicant[i] + k;
        while (j < m) {
            if (appartment[j] >= a and appartment[j] <= b) { cnt++; j++; break; }
            else if (appartment[j] > b) { break; }
            j++;
        }
    }
    cout << cnt;
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