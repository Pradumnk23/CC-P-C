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
#define pl                  pair<lli,lli>
#define pi                  pair<int,int>
#define vl                  vector<lli>
#define fastio              ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define bits(x)             __builtin_popcountll(x)
#define ld                  long double
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

int gcd(int A, int B)
{
    if (B == 0)
        return A;
    else
        return gcd(B, A % B);
}

int main()
{
    fastio;
    test()
    {
        lli n,a,b,sa=0,an=0;
        cin>>n>>a>>b;
        string s;
        fn
        {
            cin>>s;
            if( s[0]=='E' || s[0]=='Q' || s[0]=='U' || s[0]=='I'  || s[0]=='N'  || s[0]=='O'  || s[0]=='X'  )
            {
                sa+=a;
            }
            else
            {
                an+=b;
            }
        }
        if(sa>an){
            cout<<"SARTHAK"<<endl ;
        }else if(an>sa){
            cout<<"ANURADHA"<<endl ;
        }else {
            cout<<"DRAW"<<endl; ;
        }
    }
    return 0;
}
