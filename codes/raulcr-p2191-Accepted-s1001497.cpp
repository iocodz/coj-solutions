#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> pii;
typedef pair<int, pii> pii3;

const int MAXN = 101;

const int dx[] = {0, 0, 1, -1};
const int dy[] = {1, -1, 0, 0};

int N, M, sol = INT_MAX;
int e[MAXN][MAXN], dp[MAXN][MAXN];
priority_queue<pii3, vector<pii3>, greater<pii3> > Q;

bool ok(int x, int y){
    return x >= 1 && x <= N && y >= 1 && y <= M;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> N >> M;
    for(int i = 1 ; i <= N ; i++)
        for(int j = 1 ; j <= M ; j++){
            dp[i][j] = INT_MAX;
            cin >> e[i][j];
            if(j == 1){
                Q.push(pii3(e[i][j], pii(i, j)));
                dp[i][j] = e[i][j];
            }
        }
    while(!Q.empty()){
        int x = Q.top().second.first;
        int y = Q.top().second.second;
        int c = Q.top().first;

        Q.pop();

        if(y == M && c < sol)
            sol = c;

        for(int i = 0 ; i < 4 ; i++){
            int xx = x + dx[i];
            int yy = y + dy[i];
            if(ok(xx, yy) && dp[xx][yy] > c + e[xx][yy]){
                dp[xx][yy] = c + e[xx][yy];
                Q.push(pii3(dp[xx][yy], pii(xx, yy)));
            }
        }
    }

    cout << sol;

    return 0;
}
