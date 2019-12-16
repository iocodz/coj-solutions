#include <bits/stdc++.h>

using namespace std;

typedef pair<int, double> pii;
const int MAXN = 101;
double X[MAXN];
double Y[MAXN];
bool B[MAXN];
//ector<pii> adjlist[MAXN];
double D[MAXN];
double M[MAXN][MAXN];
int N;

int main()
{
    cin >> N;

    for (int i = 1 ; i <= N ; i++)
        cin >> X[i] >> Y[i];

    for (int i = 1 ; i <= N ; i++){
        for (int j = 1 ; j <= N ; j++){
            double d = sqrt(pow(X[j] - X[i], 2) + pow(Y[j] - Y[i], 2));
            M[i][j] = d;
        }
    }

    for (int i = 0 ; i <= N ; i++)
        D[i] = 1e9;

    D[1] = 0;
    double sol = 0;

    for (int i = 1 ; i <= N ; i++){
        int nodm = 0;
        for (int j = 1 ; j <= N ; j++)
            if (D[j] < D[nodm] && !B[j])
                nodm = j;
        sol += D[nodm];
        B[nodm] = true;

        for (int j = 1 ; j <= N ; j++)
            if (!B[j] && D[j] > M[nodm][j])
                D[j] = M[nodm][j];
    }


    printf("%.2lf", sol);

    //cout << sol;
    return 0;
}
