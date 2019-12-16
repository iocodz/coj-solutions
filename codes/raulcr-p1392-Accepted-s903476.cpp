#include <bits/stdc++.h>

using namespace std;

#define x first
#define y second

typedef pair<int, int> coor;

const int MAXN = 1001;

int N;
bool ok[MAXN];
coor pos[MAXN];

int euclid(int i, int j){
    int dx = pos[i].x - pos[j].x;
    int dy = pos[i].y - pos[j].y;
    dx *= dx;dy *= dy;
    return dx + dy;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;

    for(int i = 1 ; i <= N ; i++)
        cin >> pos[i].x >> pos[i].y;

    solucionar:
    for(int i = 1 ; i <= N ; i++){
        if(!ok[i]){
            int ncow = 0;
            int md = 0;
            for(int j = 1 ; j <= N ; j++)
                if(!ok[j] && i != j){
                    int d = euclid(i, j);
                    if(!md){
                        md = d;
                        ncow = j;
                    }
                    else if(md > d){
                        md = d;
                        ncow = j;
                    }
                }

            ok[ncow] = true;
        }
    }

    int sol = 0, cc = 0;
    for(int i = 1 ; i <= N ; i++)
        if(!ok[i]){
            sol = i;
            cc++;
        }

    if(cc > 1)
        goto solucionar;

    cout << sol;

    return 0;
}