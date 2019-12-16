#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e5 + 1;

int N;
int sp[MAXN];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    while(cin >> N){

        for(int i = 1 ; i <= N ; i++){
            cin >> sp[i];
            sp[i] += sp[i - 1];
        }

        long long s = 0;
        int a = sp[N] / 3;

        for(int i = 1 ; i <= N ; i++)
            if(binary_search(sp + 1, sp + 1 + N, sp[i] + a) &&
               binary_search(sp + 1, sp + 1 + N, sp[i] + 2 * a))
                s++;

        cout << s << '\n';
    }
    return 0;
}
