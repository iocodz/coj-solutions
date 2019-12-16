///by taskkill
#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> pii;
typedef pair<double, pii> pii3;

int N;
priority_queue<pii3> Q;

inline double c(int b, int e){
    return log10(b) * e;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    while(cin >> N && N){
        while(N--){
            int b, e;
            cin >> b >> e;

            Q.push(pii3(c(b, e), pii(b, e)));
        }

        cout << Q.top().second.first << ' ' << Q.top().second.second << '\n';

        while(!Q.empty())
            Q.pop();
    }

    return 0;
}
