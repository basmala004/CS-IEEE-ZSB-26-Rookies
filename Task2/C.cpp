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
    vi a(n,0), b(n,0), c(n,0);
    for (int i=0; i<n; i++){
        int x; cin>>x;
        if(x==1) a[i]=1;
        else if(x==2) b[i]=1;
        else c[i]=1;
    }

    vi pre_a(n+1,0), pre_b(n+1,0), pre_c(n+1,0);
    pre_a[0]= 0;
    pre_b[0]= 0;
    pre_c[0]= 0;
    partial_sum(a.begin(), a.end(), pre_a.begin()+1) ;
    partial_sum(b.begin(), b.end(), pre_b.begin()+1) ;
    partial_sum(c.begin(), c.end(), pre_c.begin()+1) ;


    while(q--){
        int x,y; cin>>x>>y;
        cout<<pre_a[y]-pre_a[x-1]<<" "<<pre_b[y]-pre_b[x-1]<<" "<<pre_c[y]-pre_c[x-1]<<endl;
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
