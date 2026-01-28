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
     int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> w(n);
        for (int i = 0; i < n; i++) cin >> w[i];

        int l = 0, r = n - 1;
        long long sumL = 0, sumR = 0;
        int ans = 0;

        while (l <= r) {
            if (sumL <= sumR) {
                sumL += w[l];
                l++;
            } else {
                sumR += w[r];
                r--;
            }

            if (sumL == sumR) {
                ans = l + (n - 1 - r);
            }
        }

        cout << ans << endl;
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
