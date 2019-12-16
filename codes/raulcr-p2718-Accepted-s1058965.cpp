#include<bits/stdc++.h>

using namespace std;

int main()
{
    int h1, m1, h2, m2;

    scanf("%d:%d", &h1, &m1);
    scanf("%d:%d", &h2, &m2);

    h1 = h1 * 60 + m1;
    h2 = h2 * 60 + m2;
    h1 -= h2;

    if(h1 < 0)
        h1 += 1440;

    printf("%02d:%02d\n", h1/60, h1%60);

    return 0;

}
