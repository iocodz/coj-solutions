#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> pii;

const int MAXN = 1e6 + 1;
int N, M;
pii P[MAXN / 10 + 1];
long long TA[MAXN];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> M;

    int mx = 0;

    for(int i = 1 ; i <= N ; i++){
        int a, b;
        cin >> a >> b;
        if(b > mx)
            mx = b;
        TA[b] = a;
    }

    for(int i = 1 ; i <= mx ; i++){
        TA[i] += TA[i - 1];
        //cout << TA[i] << ' ';
    }

    int ma = 0, ms = 0;

    for(int i = 0 ; i <= mx ; i++)
        if(i + (M * 2) <= mx)
            if(TA[i + (M * 2)] - TA[i - 1] > ms){
                ms = TA[i + (M * 2)] - TA[i - 1];
                ma = i + M * 2;
            }


    if(ms == 0)
        ms = TA[mx];
    
    cout << ms;

    return 0;
}