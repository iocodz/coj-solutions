#include <iostream>
#include <string>

using namespace std;

char M[5000][5000];
int c, k;

int main()
{
    cin >> c >> k;

    for (int i = 1 ; i <= c ; i++)
        for (int j = 1 ; j <= k ; j++)
            cin >> M[i][j];

    int x, y;
    cin >> x >> y;

    for (int i = 1 ; i <= c ; i++)
        for (int j = k , cont = 1 ; j >= 1 ; j-- , cont++)
            M[i][j + k] = M[i][cont];


    for (int i = c * 2 , cont = 1 ; i > c ; i-- , cont++)
        for (int j = 1 ; j <= k * 2 ; j++)
            M[i][j] = M[cont][j];


    if (M[x][y] == '.')
        M[x][y] = '#';
    else
        M[x][y] = '.';

    for (int i = 1 ; i <= c * 2 ; i++){
        for (int j = 1 ; j <= k * 2 ; j++)
            cout << M[i][j];
        cout << '\n';
    }
    return 0;
}
