///by r@ul!

#include <iostream>

using namespace std;

int N;
int TA[1001][1001];
int A[1001][1001];

int sumbox(int i, int j, int ii, int jj){
    return TA[ii][jj] - TA[i - 1][jj] - TA[ii][j - 1] + TA[i - 1][j - 1];
}

int main()
{
    cin >> N;

    for (int i = 1 ; i <= N ; i++)
        for (int j = 1 ; j <= N ; j++){
            cin >> A[i][j];
            TA[i][j] = TA[i - 1][j] + TA[i][j - 1] - TA[i - 1][j - 1] + A[i][j];
        }

    int mays = 0;

    for (int i = 1 ; i <= N ; i++)
        for (int j = 1 ; j <= N ; j++)
            for (int ii = i ; ii <= N ; ii++)
                for (int jj = j ; jj <= N ; jj++)
                    if (sumbox(i, j, ii, jj) > mays)
                        mays = sumbox(i, j, ii, jj);

    cout << mays << '\n';
    return 0;
}

/*
5
1 2 3 4 5
-1 -2 -3 -5 -6
2 3 5 6 8
0 0 0 0 1
-3 -1 -2 -3 -4

25
*/
