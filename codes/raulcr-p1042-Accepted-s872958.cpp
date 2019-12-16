#include <bits/stdc++.h>

using namespace std;

int N;
float A, B, S, K;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;

    for(int i = 1 ; i <= N ; i++){
        cin >> A >> B;

        S = ((A * A) - (B * B)) / (2 * A);
        K += S;

        printf("%.1lf\n", S);

        S = 0.0;
    }

    printf("%.1lf\n", K / N);
    return 0;
}
