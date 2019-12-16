#include <bits/stdc++.h>
#define pii pair<int, int>
using namespace std;

int cont[10];
vector<pii > sol;

bool cmp(pii a, pii b){
if(a.first == b.first) return a.second < b.second;
return a.first > b.first;

}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string g;
    cin>>g;
    for(int i=0, c=g.length();i<c;i++)cont[g[i]-'0']++;

    for(int i=1; i<10;i++) sol.push_back(pii(cont[i],i));
    sort(sol.begin(),sol.end(), cmp);
    for(int i=0;i<9;i++)
        if(i<8) cout<<sol[i].second<<" ";
        else cout<<sol[i].second<<'\n';

    return 0;
}
