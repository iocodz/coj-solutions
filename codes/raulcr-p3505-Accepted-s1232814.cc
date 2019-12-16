#include <bits/stdc++.h>
#define ll unsigned long long
using namespace std;

const int MAXN = 120;
bool k[MAXN];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t,A,C,N;
    cin>>t;
    for(int j=1; j<=t;j++)
    {
        for(int i =0; i<MAXN; i++)k[i]=false;
        cin>>N>>A>>C;

        k[0]=true;
        int cont=1;
        int xo=0;
        xo= (A*xo+C)%N;
        while(!k[xo])
        {
            k[xo]=true;
            xo= (A*xo+C)%N;
            cont++;
        }
        cout<<"Case #"<<j<<": "<<cont<<'\n';
    }



//    int a, n;cin >> a;
//    n = 1;
//
//    while (((2 * n) * (n + 1) * (2 * n + 1) - (6 * n * (n + 1)) - (9 * n)) <= a){
//        n += 1;
//    }
//
//    n -= 1;
//
//    cout << (n);

return 0;
}
