#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e6 + 1;

int N;
int fq[MAXN];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    while(cin >> N){
        fill(fq, fq + MAXN, 0);
        while(N % 2 == 0 && N > 1){
            N /= 2;
            fq[2]++;
        }
        for(int i = 3 ; i <= N ; i+=2){
            if(N % i == 0)
                while(N % i == 0 && N > 1){
                    fq[i]++;
                    N /= i;
                }
        }
        for(int i = 2 ; i < MAXN ; i++)
            if(fq[i])
                cout << '(' << i << '(' << fq[i] << ')' << ')';

        cout << '\n';
    }
    return 0;
}
