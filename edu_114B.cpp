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
    int a[3]={0},m;
    cin>>a[0]>>a[1]>>a[2]>>m;
    int mx=a[0]+a[1]+a[2]-3;
    sort(a,a+3);
    int mn=a[2]-1-a[0]-a[1];
    if(mn<=m && m<=mx) cout<<"YES\n";
    else cout<<"NO\n";
    re;
}


int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t-->0)
      solve();
    re 0;  
}





