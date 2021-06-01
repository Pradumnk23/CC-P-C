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

int main()
{
    fastio;
    test()
    {
        lli n,k,pos,dist=0,cnt=1;
        string s;
        cin>>n>>k>>s;
        for(lli i=0; i<n-1; i++)
        {
            if(s[i]==s[i+1])
                dist+=2;
            if(s[i]!=s[i+1] )
                dist++;
        }
        while(k--)
        {
            cin>>pos;
            if(n==1)
            {
                cout<<"0"<<endl;
                cnt=0;
            }
            pos--;
            if(s[pos]=='1')
                s[pos]='0';
            else
                s[pos]='1';

            if(pos==0 || pos==n-1)
            {
                if(pos==0)
                {
                    if(s[pos]==s[pos+1])
                        dist++;
                    else
                        dist--;
                }
                else
                {
                    if(s[pos]==s[pos-1])
                        dist++;
                    else
                        dist--;
                }
            }
            else
            {
                if(s[pos]==s[pos+1])
                    dist++;
                else
                    dist--;
                if(s[pos]==s[pos-1])
                    dist++;
                else
                    dist--;
            }
            if(cnt==1)
                cout<<dist<<endl;
        }
    }
    return 0;
}
