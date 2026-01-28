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
    int T;
    cin >> T;
    while (T--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        vector<int> total(n + 1, 0);
        for (int x : a) total[x]++;

        vector<int> limit(n + 1, 0);
        bool ok = true;
        for (int v = 1; v <= n; v++) {
            if (total[v] % k != 0) {
                ok = false;
                break;
            }
            limit[v] = total[v] / k;
        }

        if (!ok) {
            cout << 0 << '\n';
            continue;
        }

        vector<int> freq(n + 1, 0);
        int l = 0;
        long long ans = 0;
        int bad = 0;

        for (int r = 0; r < n; r++) {
            int x = a[r];
            freq[x]++;
            if (freq[x] == limit[x] + 1) bad++;

            while (bad > 0) {
                int y = a[l];
                if (freq[y] == limit[y] + 1) bad--;
                freq[y]--;
                l++;
            }

            ans += (r - l + 1);
        }

        cout << ans << '\n';
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
