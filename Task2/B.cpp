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
    int n, q; cin>>n>>q;
    vi arr(n); cin>>arr;
    vi pre(n+1); partial_sum(arr.begin(), arr.end(), pre.begin()+1);
    while (q--){
        int l,r,k; cin>>l>>r>>k;
        bool x,y,total;
        x=(pre[r]-pre[l-1])&1;
        y= ((r-l+1)*k)&1;
        total= pre[n] & 1;
        bool sum = (x^y) ^ total;
        if(sum) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

}

int32_t main()
{
    fastio();
    int t=1; cin>>t;
    while(t--) {
        Solve();
    }


    return 0;
}
