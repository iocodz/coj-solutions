#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

const int MX = 5001;

int N;
char A[MX][MX];

bool Todp(int i, int j, int ii, int jj){
    for (int a = i ; a <= ii ; a++)
        for (int b = j ; b <= jj ; b++)
            if (A[a][b] == '#')
                return false;

    return true;
}

int main()
{
    int cas;
    cin >> cas;

    while (cas--){
        cin >> N;

        for (int i = 1 ; i <= N ; i++)
            for (int j = 1 ; j <= N ; j++)
                cin >> A[i][j];

        int sol = 0;

        for (int i = 1 ; i <= N ; i++)
            for (int j = 1 ; j <= N ; j++)
                for (int a = 1 ; a <= min(N - i + 1, N - j + 1) ; a++)
                    if (Todp(i, j, i + a - 1, j + a - 1) && sol < a)
                        sol = a;

        cout << sol << '\n';
    }
    return 0;
}
