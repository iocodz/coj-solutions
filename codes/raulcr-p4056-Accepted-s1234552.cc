#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll dig[10];
string g;

ll llegar(int val)
{
    return (dig[val]-1);
}

ll powd(ll bas, ll ex)
{
    if(ex==0)return 1;

    ll sol=powd(bas,ex/2);
    sol*=sol;
    if(ex%2)sol*=bas;
    return sol;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n,t,k;
    cin>>t;


    while(t--)
    {
        cin>>n>>g;

        for(int i=0; i<10; i++) dig[i]=1;

        for(int i=0; i<n; i++)
        {
            cin>>k;
            dig[k]=0;
        }
        for(int i=1; i<10; i++) dig[i]+=dig[i-1];

        ll suma=0;
//cout<<"llegar a 2"<<llegar(2)<<'\n';

        for(int j=0, len=g.length(); j< len; j++)
        {
//cout<<"llegar a g[j]-0 "<<llegar(g[j]-'0')<<'\n';
//cout<<"pow "<<pow(10-n,len-j-1)<<'\n';

            suma+=llegar(g[j]-'0')*powd(10-n,len-j-1);
        }
        cout<<suma<<'\n';

    }


    return 0;
}
