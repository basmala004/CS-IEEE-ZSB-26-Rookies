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

    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    vector<int> ans(n);
    stack<int> st; 

    for (int i = 0; i < n; i++) {
        while (!st.empty() && a[st.top()] >= a[i]){
            st.pop();
        }
        if (st.empty()) ans[i] = 0;
        else ans[i] = st.top() + 1; 
        st.push(i);
    }

    for (int i = 0; i < n; i++)
        cout << ans[i] << " ";
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
