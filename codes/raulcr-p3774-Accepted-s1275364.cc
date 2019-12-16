#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;

const int MAXN = 1e5 + 5;
vi adj[MAXN];
bool isSuperior[MAXN], visited[MAXN];
int value[MAXN];
int N;

void add(int u, int v){
	adj[u].push_back(v);
	adj[v].push_back(u);
}

int DFS(int node, int maxim)
{
	visited[node] = true;
	if(maxim > value[node]) 
		isSuperior[node] = false;
	maxim = max(maxim, value[node]);

	int child = value[node];

	for(vi::iterator i = adj[node].begin(); i != adj[node].end(); i++)
	{
		if(!visited[*i]){
			child = max(child, DFS(*i, maxim));
		}
	}
	if(child > value[node]) isSuperior[node] = false;
	return child;
}




int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	//freopen("1.in", "r", stdin);
	for (int i = 0; i < MAXN; ++i)
	{
		isSuperior[i] = true;
	}

	cin >> N;

	for(int i = 1; i <= N; i++) cin >> value[i];
	for (int i = 1; i < N; ++i)
	{
		int u, v;
		cin >> u >> v;
		add(u, v);
	}

	DFS(1, 0);

	int ans = 1e7;
	for(int i = 1; i <= N; i++){
		if(isSuperior[i])
			ans = min(ans, value[i]);
	}

	cout << ans << '\n';
	return 0;
}