#include <bits/stdc++.h>
using namespace std;
#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define int long long
#define vi vector<int>
template <typename T>
ostream &operator<<(ostream &os, vector<T> &v)
{
    for (auto &i : v)
        os << i << ' ';
    return os;
}
template <typename T>
istream &operator>>(istream &is, vector<T> &v)
{
    for (auto &i : v)
        is >> i;
    return is;
}

void Solve()
{
    int n;
    int x;
    cin >> n >> x;

    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int sum = 0;
    int l = 0;
    int ans = 0;

    for (int r = 0; r < n; r++) {
        sum += a[r];

        while (sum > x) {
            sum -= a[l];
            l++;
        }

        if (sum == x) {
            ans++;
        }
    }

    cout << ans;
}

int32_t main()
{
    fastio();
    int t = 1; // cin>>t;
    while (t--)
    {
        Solve();
    }

    return 0;
}
