#include <bits/stdc++.h>

using namespace std;

int N;

map <int, string> m;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    m[1] = "one";
    m[2] = "two";
    m[3] = "three";
    m[4] = "four";
    m[5] = "five";
    m[6] = "six";
    m[7] = "seven";
    m[8] = "eight";
    m[9] = "nine";
    m[10] = "ten";
    m[11] = "eleven";
    m[12] = "twelve";

    cin >> N;
    for(int i = 1; i <= N ; i++){
        int a; cin >> a;
        cout << m[a] << '\n';
    }

    return 0;
}
