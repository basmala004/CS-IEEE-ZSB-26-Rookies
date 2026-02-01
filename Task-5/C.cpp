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
    vector<int> p(n);

    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }

    int total = 0;
    for (auto x : p) total += x;

    int ans = INT64_MAX;

    for (int mask = 0; mask < (1 << n); mask++) {
        int sumA = 0;

        for (int i = 0; i < n; i++) {
            if (mask & (1 << i)) {
                sumA += p[i];
            }
        }

        int sumB = total - sumA;
        int diff = llabs(sumA - sumB);
        ans = min(ans, diff);
    }

    cout << ans << endl;
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
