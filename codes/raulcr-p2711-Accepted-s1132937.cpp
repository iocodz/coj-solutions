#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1001;

typedef pair<int, int > pii;

int N, t[MAXN];
priority_queue<pii, vector<pii>, less<pii> > Q;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;
    for(int i = 1 ; i <= N ; i++){
        int a; cin >> a;
        Q.push(pii(a, i));
    }

    int p = 1;
    while(!Q.empty()){
        int n = Q.top().second;
        Q.pop();
        t[p] = n;
        p++;
    }

    for(int i = 1 ; i <= N ; i++)
        cout << t[i] << '\n';

    return 0;
}
