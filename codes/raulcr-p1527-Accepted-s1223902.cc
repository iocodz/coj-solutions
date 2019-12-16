#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> pii;

const int MAXN = 1001;

pii ti[MAXN];
vector<int> ad[MAXN];

int main() {

    int N, M;
    cin >> N >> M;

    for(int i = 1 ; i <= N ; i++){
        for(int j = 1 ; j <= N ; j++){
            int l; cin >> l;
            if(l) {
                ad[i].push_back(j);
            }
        }
        ti[i] = pii(0, i);
    }

    queue<int> q;
    q.push(M);
    ti[M].first = 1;
    while(q.size()){
        int nod = q.front();
        q.pop();

        for(int i = 0 ; i < ad[nod].size() ; i++){
            if(!ti[ad[nod][i]].first){
                ti[ad[nod][i]].first = ti[nod].first + 1;
                q.push(ad[nod][i]);
            }
        }
    }

    sort(ti + 1, ti + 1 + N);
    int c = 0;
    for(int i = 1 ; i <= N ; i++){
        if(!ti[i].first) continue;
        c++;
        if(c == 1) cout << ti[i].second;
        else if(ti[i].first != ti[i - 1].first){
            cout << '\n';
            cout << ti[i].second;
            continue;
        }
        else cout << " " << ti[i].second;
    }

    return 0;
}
