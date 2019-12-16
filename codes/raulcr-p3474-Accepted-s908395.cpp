#include <bits/stdc++.h>

using namespace std;

typedef long long LL;

const int MAXN = 1002;

LL N, M;
int mx;
LL a[MAXN], b[MAXN];
LL c[MAXN * 2];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;
    for(int i = 0 ; i <= N ; i++)
        cin >> a[i];

    cin >> M;
    for(int i = 0 ; i <= M ; i++)
        cin >> b[i];

    for(int i = 0 ; i <= N ; i++)
        for(int j = 0 ; j <= M ; j++){
            if(i == 0 && j == 0)
                c[0] += (a[i] * b[j]);
            else if(i == 0){
                c[j] += a[i] * b[j];
                mx = max(mx, j + 1);
            }
            else if(j == 0){
                c[i] += a[i] * b[j];
                mx = max(mx, i + 1);
            }
            else{
                c[i + j] += a[i] * b[j];
                mx = max(mx, j + i);
            }

        }

    cout << c[0];
    for(int i = 1 ; i <= mx ; i++)
        cout << " " << c[i];



    return 0;
}
