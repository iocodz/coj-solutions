#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> pii;
typedef pair<pii, int> p3;

const int MAXN = 1001;

int N;
int ta[MAXN];
set<p3> mk;

p3 build(int a, int b, int c){
    if(a > b)
        swap(a, b);
    if(b > c)
        swap(b, c);
    if(a > c)
        swap(a, c);
    return p3(pii(a, b), c);
}

int tercern(int a, int b){
    int sc = a * a + b * b;
    int r = sqrt(sc);
    if(r * r == sc && r < MAXN)
        return r;
    return -1;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout .tie(0);

    for(int i = 1 ; i < MAXN ; i++)
        for(int j = i + 1 ; j < MAXN ; j++){
            int t3 = tercern(i, j);
            p3 c = build(i, j, t3);
            if(t3 > 0 && mk.find(c) == mk.end()){
                mk.insert(c);
                int k = c.second;
                ta[k] += 1;
            }
        }

    for(int i = 1 ; i < MAXN ; i++)
        ta[i] += ta[i - 1];

    cin >> N;
    for(int i = 1 ; i <= N ; i++){
        int a; cin >> a;
        cout << ta[a] << '\n';
    }

    return 0;
}
