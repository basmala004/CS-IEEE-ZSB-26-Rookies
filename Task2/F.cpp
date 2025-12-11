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
    int n, k, q; cin>>n>>k>>q; 
    vi arr(200005, 0);
    while (n--){
        int l,r; cin>>l>>r;
        arr[l]++;
        arr[r+1]--;
    }

    vi pre(200005, 0);
    partial_sum(arr.begin(), arr.end(), pre.begin());


    vi acc(200005,0);
    for (int i=1; i<200001; i++){
        if(pre[i]>=k) acc[i]=1;
    }
    vi accpre(200005,0);
    partial_sum(acc.begin(), acc.end(), accpre.begin());


    while (q--){
        int a,b; cin>>a>>b; 
        cout<<accpre[b]-accpre[a-1]<<endl;
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
