#include <bits/stdc++.h>
#define ll unsigned long long
using namespace std;

const int MAXN = 35;
bool ady[MAXN][MAXN];
bool visited[MAXN];
int N,M;

void DFS(int n)
{
    visited[n]=true;
    for(int i=1; i<=N; i++)
        if(ady[n][i] && !visited[i])
            DFS(i);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>N>>M;
    int a,b;
    for(int i=0; i<M; i++)
    {
        cin>>a>>b;
        ady[a][b]=true;
    }
    vector<int> sol;
    for(int i=1 ; i<=N; i++)
    {
        sol.clear();
        for(int j=0; j<=N; j++) visited[j]=false;
        DFS(i);
        for(int j=1; j<=N; j++) if( i!=j && visited[j]) sol.push_back(j);
        cout<<sol.size();
        int len=sol.size();
        for(int j=0; j<len;j++) cout<<" "<<sol[j];
        cout<<'\n';
    }
    return 0;
}
