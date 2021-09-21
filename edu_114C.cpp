/*.........................*
 *..................___....*
 *.../|...../|...../...\...*
 *../.|..../.|..../........*
 *....|......|...|.........*
 *....|......|..|..___.....*
 *....|......|..|./...\....*
 *....|......|..|/.....\...*
 *....|......|..\...../....*
 *..__|__..._|_..\___/.....*
 *.........................*
 */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fi first
#define se second
#define re return
#define pii pair<int,int>
#define push_back pb
void solve()
{
    ll n;
    cin>>n;
    vector<ll> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a.begin(),a.end());
    ll m;
    cin>>m;
    ll tot=accumulate(a.begin(),a.end(),0ll);
    while(m-->0)
    {
        ll x,y;
        cin>>x>>y;
        ll ans=9e18;
        auto it=lower_bound(a.begin(),a.end(),x);
        if(it!=a.end())
            ans=max(0ll,y-tot+*it);
        if(it!=a.begin())
            ans=min(ans,max(0ll,y-tot+*prev(it))+max(0ll,x-*prev(it)));
        cout<<ans<<"\n";
    }
    re;
}


int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t=1;
    //cin>>t;
    while(t-->0)
      solve();
    re 0;  
}





