#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int MAXN = 11;


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t,a,b;
    cin >> t;
    for(int i=1; i<=t; i++)
    {
        cin>>a>>b;
        if(b%2)
            cout<<"Case #"<<i<<": NO\n";
        else cout<<"Case #"<<i<<": YES\n";

    }

    return 0;
}
