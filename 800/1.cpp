#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
void solve()
{
    int a, b, c, ans=INT_MAX;
    cin>>a>>b>>c;
    int x=min(a, min(b, c)), z=max(a, max(b, c)), y=a+b+c-x-z;
    ans=min(ans, z-x);
    a=x, b=y, c=x+y;
    ans=min(ans, c-a);
    a=y+z, b=y, c=z;
    ans=min(ans, a-y);
    a=x, y=x+z, z=z;
    ans=min(ans, y-a);
    cout<<ans<<endl;
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