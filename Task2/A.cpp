#include <bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL);
#define int long long
#define vi vector<int>
template<typename T> ostream& operator<<(ostream& os, vector<T>& v)
{
    for (auto& i : v) os << i << ' ';
    return os;
}
template<typename T> istream& operator>>(istream& is, vector<T>& v)
{
    for (auto& i : v) is >> i;
    return is;
}


void Solve() {
    int n,q; cin>>n>>q;
    vi arr(n); 
    for(int i=0; i<n; i++) cin>>arr[i];
    vi pre(n+1);
    pre[0]=0;
    partial_sum(arr.begin(), arr.end(), pre.begin()+1);
    while(q--){
        int r,l; cin>>r>>l;
        cout<<pre[l]- pre[r-1]<<endl;
    }
}

int32_t main()
{
    fastio();
    int t=1; //cin>>t;
    while(t--) {
        Solve();
    }


    return 0;
}
