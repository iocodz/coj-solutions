#include <bits/stdc++.h>
using namespace std;

int main()
{
   ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
   long long r;
   int t,n;
   cin>>t;
   while(t--){
    cin>>n>>r;
    for(int i=0; i<n;i++)
        r += (r/(n-1));
    cout<<r<<'\n';

   }
return 0;
}
