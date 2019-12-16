#include <bits/stdc++.h>

using namespace std;

#define f first
#define s second

typedef pair<int, int> pii;

const int MAXN = 1e5 + 1;

int N, M;
int dex[MAXN];
pii arr[MAXN];
vector<int> sl;

bool cmp(pii a, pii b){
    if(a.f == b.f)
        return a.s > b.s;
    return a.f < b.f;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;

    while(N--){
        cin >> M;

        for(int i = 1 ; i <= M ; i++)
            cin >> arr[i].f >> arr[i].s;

        sort(arr + 1, arr + 1 + M, cmp);

        for(int i = M ; i >= 1 ; i--)
            dex[M - i + 1] = arr[i].s;

        sl.clear();

        for(int i = 1 ; i <= M ; i++){
            int ps = (upper_bound(sl.begin(), sl.end(), dex[i]) - sl.begin());

            if(ps == sl.size())
                sl.push_back(dex[i]);
            else
                sl[ps] = dex[i];
        }

        cout << sl.size() << '\n';
    }

    return 0;
}
