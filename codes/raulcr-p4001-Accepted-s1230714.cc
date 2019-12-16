#include <bits/stdc++.h>

using namespace std;

typedef long long LL;

const int ALPH = 26;

int N;

struct node {
	node *next[ALPH];
	LL prefix;
	bool mk;
} root;

LL dfs_sol(node *a, LL ll){
    LL ret = ll;
    ll++;
    for(int i = 0 ; i < ALPH ; i++){
        if(a -> next[i] == NULL) continue;
        ret += dfs_sol(a->next[i], ll);
    }
    return ret;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

	cin >> N;
	for(int i = 1; i <= N; i++) {
		string s;
		cin >> s;

		node *k = &root;
		k-> mk = true;
		k-> prefix = 0LL;

		for(int j = 0; j < s.size(); j++) {
			int p = s[j] - 'a';

			if(k -> next[p] == NULL)
				k -> next[p] = new node();
			k->next[p]->prefix++;
			k = k -> next[p];
		}

		k -> mk = true;
	}

	LL xdss = dfs_sol(&root, 0);
 
        cout << xdss << " " << xdss << '\n';

	return 0;
}
