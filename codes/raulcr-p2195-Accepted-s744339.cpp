#include <bits/stdc++.h>

using namespace std;

const int MAXN = 100001;

int N, H[MAXN], V[MAXN];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie();

    cin >> N;

    for(int i = 1 ; i <= N ; i++)
        cin >> H[i];

    for(int i = N - 1 ; i >= 1 ; i--){
        if(H[i] == H[i + 1])
            V[i] = V[i + 1];
        else if(H[i] < H[i + 1])
            V[i] = i + 1;
        else {
            int j = i + 1;
            while(1){
                if(V[j] == 0 && H[i] > H[j]){
                    V[i] = 0;
                    break;
                }
                if(H[i] < H[j]){
                    V[i] = j;
                    break;
                }
                j = V[j];
            }
        }
    }

    for(int i = 1 ; i <= N ; i++)
        cout << V[i] << '\n';
    return 0;
}
