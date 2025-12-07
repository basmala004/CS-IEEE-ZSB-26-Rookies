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
    int S = n * (n + 1) / 2;

    if (S % 2 == 1) {
        cout << "NO";
        return;
    }


    cout << "YES"<< endl;

    int target = S / 2;
    vector<int> set1;

    for (int i = n; i >= 1; i--) {
        if (i <= target) {
            set1.push_back(i);
            target -= i;
        }
    }

    vector<int> set2;
    vector<bool> taken(n + 1, false);

    for (int x : set1){
     taken[x] = true;
    }
    for (int i = 1; i <= n; i++) {
        if (!taken[i]) set2.push_back(i);
    }

    cout << set1.size() << endl;
    for (int x : set1) cout << x << " ";
    
    cout << endl;

    cout << set2.size() << endl;
    for (int x : set2) cout << x << " ";
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

