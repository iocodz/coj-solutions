#include <iostream>

using namespace std;

const int D = 11;
const int H = 11;
const int M = 11;

int main()
{
    int d, h, m;
    cin >> d >> h >> m;
    if(d < D)
        cout << -1 << '\n';
    else if(d == D && h < H)
        cout << -1 << '\n';
    else if(d == D && h == H && m < M)
        cout << -1 << '\n';
    else
        cout << (((d - D) * 24) * 60) + (h - H) * 60 + (m - M) << '\n';
    return 0;
}
