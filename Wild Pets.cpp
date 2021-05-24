#include <bits/stdc++.h>
#include <iostream>
#include <math.h>
#include<algorithm>
#include <vector>
#include <string>
using namespace std;

#define mp                  make_pair
#define pb                  push_back
#define lli                 long long int
#define sl                  set<lli>
#define pl                  pair<lli,lli>
#define pi                  pair<int,int>
#define ml                  map<<lli,lli>
#define vl                  vector<lli>
#define fastio              ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define bits(x)             __builtin_popcountll(x)
#define lld                  long double
#define all(x)              x.begin(),x.end()
#define fn                  for(lli i=0;i<n;i++)
#define rep(i,a,b)          for(lli i=a;i<b;i++)
#define repo(i,a,b)         for(lli i=a;i>=b;i--)
#define test()              lli test; cin>>test; while(test--)
#define fi                  first
#define se                  second
#define yes                 cout<<"YES"<<endl
#define no                  cout<<"NO"<<endl
#define sp(x)               fixed << setprecision(x)
#define mod                 1000000007

lli factorial(lli n)
{
    lli ans=1;
    for(lli j=2;j<=n;j++)
    {
        ans=((ans%mod)*(j%mod))%mod;
    }
    return ans;
}

int main()
{
    fastio;
    lli x,y;
    cin>>x>>y;
    lli x1=factorial(x);
    lli x2=factorial(y);
    lli ans=((x1%mod)*(x2%mod)%mod);
    if(x==y)
       ans=((ans%mod)*2)%mod;
    cout<<ans<<endl;
    return 0;
}
