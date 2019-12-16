#include <bits/stdc++.h>

using namespace std;

#define y second.second
#define x second.first
#define co first

typedef pair<int, int> pii;
typedef pair<int, pii> pii3;

const int MAXN = 11;

const int dx[] = {1, -1, 0, 0};
const int dy[] = {0, 0, -1, 1};

int N;
bool mk[MAXN][MAXN];
pii in, fin;

bool ok(int xx, int yy){
    return xx >= 1 && xx <= N && yy >= 1 && yy <= N;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;
    for(int i = 1 ; i <= N ; i++)
        for(int j = 1 ; j <= N ; j++){
            char a; cin >> a;

            if(a == 'm')
                in = pii(i, j);
            else if(a == '#')
                fin = pii(i, j);
            else if(a == '*')
                mk[i][j] = 1;
        }

    queue<pii3> Q;
    Q.push(pii3(0, in));
    mk[in.first][in.second] = true;

    while(Q.size()){
        int f = Q.front().x;
        int c = Q.front().y;
        int cost = Q.front().co;

        if(Q.front().second == fin){
            cout << cost;
            goto End;
        }

        Q.pop();

        for(int i = 0 ; i < 4 ; i++){
            int xx = f + dx[i];
            int yy = c + dy[i];

            if(mk[xx][yy] || !ok(xx, yy)) continue;

            mk[xx][yy] = true;
            Q.push(pii3(cost + 1, pii(xx, yy)));
        }

    }
    cout << -1;
    End:
    return 0;
}
