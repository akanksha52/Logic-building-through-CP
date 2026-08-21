#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
void solve()
{
    int n, m, p=0, q=0;
    cin>>n>>m;
    vector<int> a(n), b(m);
    for(auto &i:a) cin>>i;
    for(auto &i:b) cin>>i;
    p=a[0]+n, q=b[0]+m;
    if(p>=q) cout<<1<<endl;
    else cout<<2<<endl;
    return;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}