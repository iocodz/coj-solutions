#include <bits/stdc++.h>

using namespace std;

const int MAXN = 55*3;

int N, M;
map<string, int > mp;
vector<int> ad[MAXN];
long double sol[MAXN];
bool visited[MAXN];

long double buscar(int pos)
{
    if(visited[pos]) return sol[pos];
    visited[pos]=true;
    sol[pos]=buscar(ad[pos][0])+buscar(ad[pos][1]);
    sol[pos]/=2;
    return sol[pos];
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> N >> M;

    string a, b, c,p;
    cin >> p;
    mp[p] = 0;

    int nodos = 0;
    for(int i = 1 ; i <= N ; i++)
    {
        cin >> a >> b >> c;
        if(mp.find(a) == mp.end())
            mp[a] = ++nodos;

        if(mp.find(b) == mp.end())
            mp[b] = ++nodos;

        if(mp.find(c) == mp.end())
            mp[c] = ++nodos;

        int aa = mp[a], bb = mp[b], cc = mp[c];
        ad[aa].push_back(bb);
        ad[aa].push_back(cc);
    }

    for(int i=0; i<MAXN; i++)
     if(ad[i].size()==0)
            visited[i]=true;

    sol[mp[p]]=1.0;
    long double mayor=0;
    int pos=1;

    vector<string> candi;
    for(int i = 0 ; i < M ; i++)
    {
        cin >> a;
        candi.push_back(a);
        if(mp.find(a) != mp.end())
        {
            int kk = mp[a];
            long double aux=buscar(kk);
            if(pos==-1)
            {
                pos=i;
                mayor=aux;
            }
            else
            {
                if(aux>mayor)
                {
                    pos=i;
                    mayor=aux;
                }
            }
        }else{
        if(pos==-1)pos=0;
        }

    }
    cout << candi[pos]<<'\n';
    return 0;
}
