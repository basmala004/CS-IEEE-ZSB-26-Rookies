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

    vector<int> A(n);
    for (int i = 0; i < n; i++) cin >> A[i];

    vector<int> x(n), y(n);

    x[0] = A[0];
    for (int i = 1; i < n; i++)
        x[i] = gcd(x[i-1], A[i]);


    y[n-1] = A[n-1];
    for (int i = n-2; i >= 0; i--)
        y[i] = gcd(y[i+1], A[i]);

    int ans = 1;

    for (int i = 0; i < n; i++) {
        int g;

        if (i == 0)
            g = y[1];
        else if (i == n-1)
            g = x[n-2];
        else
            g = gcd(x[i-1], y[i+1]);

        ans = max(ans, g);
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
