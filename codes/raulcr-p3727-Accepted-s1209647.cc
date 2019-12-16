#include <bits/stdc++.h>

using namespace std;

vector<int> ady[2000005];
bool visited[2000005], construct[2000005];
int N,M;


int BFS(int a){
    queue<int>cola;
    cola.push(a);
    visited[a]=true;
    cola.push(1);
    int citi,b;
    int sol=0;
    while(!cola.empty()){
        sol++;
        citi=cola.front();
        cola.pop();
        b=cola.front();
        cola.pop();
        construct[citi]=(b==1);
    for(int i=0, c=ady[citi].size(); i<c; i++)
        if(!visited[ady[citi][i]]){
            visited[ady[citi][i]]=true;
            cola.push(ady[citi][i]);
            cola.push(b*-1);
        }
         // sol+=DFS(ady[citi][i],!tipo);
    }
return sol;
}

bool loca()
{
    for(int i=1; i<=N; i++)
        if(!visited[i])
        {
            if(BFS(i)==1) return false;
        }
    return true;
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
        ady[a].push_back(b);
        ady[b].push_back(a);
    }
    if(!loca()) cout<<"Impossible\n";
    else
    {
        cout<<"Possible\n";
        for(int i=1; i<=N; i++)
        {
            if(construct[i]) cout<<"1\n";
            else cout<<"2\n";
        }

    }

    return 0;
}
