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
    int n, x; cin>>n>>x;
    vi arr;
    map<int, int> mp;
    for(int i=1; i<=n; i++){
        int a; cin>>a;
        if(mp[x-a]!=0 && mp[x-a]!=i){
            cout<<mp[x-a]<<" "<<i;
            return;
        }
        mp[a]=i;

    }
    
    cout<<"IMPOSSIBLE";

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
