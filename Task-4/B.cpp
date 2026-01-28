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
    int n;
    cin >> n;

    vector<int> t(n);
    cin >> t;

    int l = 0, r = n - 1;
    int ta = 0, tb = 0;
    int cnta = 0, cntb = 0;

    while (l <= r) {
        if ( ta <= tb) {
         ta += t[l];
            cnta++;
            l++;
        } else {
            tb += t[r];
            cntb++;
            r--;
        }
    }

    cout << cnta <<" "<< cntb;
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
