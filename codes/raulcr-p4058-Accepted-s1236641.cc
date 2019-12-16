#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll MOD = 1e9 + 7,modP;
vector<ll> p;
const ll MAXN =1e6 + 5;
bool v[MAXN];


void buscaPrimos()
{
    for(ll i=2; i<MAXN; i++)
        if(!v[i])
        {
            p.push_back(i);
            for(ll j=i*i; j<MAXN; j+=i)
                v[j]=true;
        }
}

ll phi(ll a)
{
    ll b=a;
    for(int i=0; p[i]*p[i]<=a; i++)
        if(a%p[i]==0)
        {
            b=b/p[i]*(p[i]-1);
            do a/=p[i];
            while(a%p[i]==0);
        }
    if(a>1) b=b/a*(a-1);
    return b;
}

struct matrix
{
    ll M[2][2];

    friend matrix operator *(matrix &a,matrix &c)
    {
        matrix b;
        b.M[0][0] = (c.M[0][0] * a.M[0][0] + c.M[0][1] * a.M[1][0]) % MOD;
        b.M[0][1] = (c.M[0][0] * a.M[1][0] + c.M[0][1] * a.M[1][1]) % MOD;
        b.M[1][0] = (c.M[1][0] * a.M[0][0] + c.M[1][1] * a.M[1][0]) % MOD;
        b.M[1][1] = (c.M[1][0] * a.M[0][1] + c.M[1][1] * a.M[1][1]) % MOD;
        return b;
    }
};

ll fastExpo(ll base, ll expo)
{
    if(expo==0)return 1;
    ll aux=1;
    if(expo&1) aux=base;
    ll sol=fastExpo(base,expo/2);
    sol*=sol;
    sol%=modP;
    sol*=aux;
    sol%=modP;
    return sol;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    buscaPrimos();

    ll sol1,sol2,N,t,a,b,tt;
    cin>>t;

    for(int k=1; k<=t; k++)
    {
        cin >>a>>b>>modP>>N;

        matrix A = {0,1,1,1};
        matrix B = {0,1,1,1};
        MOD=phi(modP);
tt=N;
        if(N==1) cout<<"Case #"<<k<<": "<<a%modP<<'\n';
        else
        {
            N-=2;

            while(N)
            {
                if(N & 1)
                    B = A * B;
                A = A * A;
                N /= 2;
            }
            if(tt>12)tt=MOD;
            else tt=0;
            sol1=fastExpo(a,B.M[0][0]+tt);
            sol2=fastExpo(b,B.M[0][1]+tt);
            sol1*=sol2;
            sol1%=modP;
            cout<<"Case #"<<k<<": "<<sol1<<'\n';
        }
    }
    return 0;
}