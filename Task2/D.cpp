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
    int n; cin>>n; 
    vi arr(n); cin>>arr;
    vi sorted=arr;
    sort(sorted.begin(),sorted.end());

    vi pre(n+1,0), presorted(n+1,0);

    partial_sum(arr.begin(), arr.end(), pre.begin()+1);
    partial_sum(sorted.begin(), sorted.end(), presorted.begin()+1);
     
    int m; cin>>m;
    while (m--){
        int type , l, r; cin>>type>>l>>r;
        if(type==1) cout<<pre[r]-pre[l-1]<<endl;
        else cout<<presorted[r]-presorted[l-1]<<endl;
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
