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

    vector<pair<int, int>> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first;
        a[i].second = i + 1;
    }

    sort(a.begin(), a.end());

    int l = 0, r = n - 1;
    while (l < r)
    {
        int sum = a[l].first + a[r].first;

        if (sum == x)
        {
            cout << a[l].second << " " << a[r].second;
            return;
        }
        else if (sum < x)
        {
            l++;
        }
        else
        {
            r--;
        }
    }

    cout << "IMPOSSIBLE";
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
