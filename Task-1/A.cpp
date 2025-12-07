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
    int x; cin>>x;
    int n; cin>>n;
    vi weights(n); 
    for (int &w : weights) cin >> w;

    vector<bool> att(n+1, false);

    int q; cin>>q;
    while(q--){
        int type; cin>>type;
        if(att[type]){
            x-=weights[type-1];
            att[type]=false;

        }else{
            x+=weights[type-1];
            att[type]=true;
        }


        cout<<x<<endl;
         
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
