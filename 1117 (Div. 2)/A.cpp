#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
void solve()
{
    int n, m;
    cin>>n>>m;
    string ans="YES";
    vector<string> a(n), b(m);
    vector<int> t(26);
    for(auto &i:a) cin>>i, t[i[0]-'a']=1;
    for(auto &i:b) 
    {
        cin>>i;
        if(ans=="NO") continue;
        for(auto &j:i) 
        {
            if(!t[j-'A']) 
            {
                ans="NO";
                break;
            }
        } 
    }
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