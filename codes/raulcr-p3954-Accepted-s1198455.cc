#include <bits/stdc++.h>

using namespace std;

const int MAXN = 5e4 + 1;

int N, M, A[MAXN], ft[MAXN];

int low_bit(int a){
    return (a & (-a));
}

int query(int ind){
    int sol = 0;
    for(int i = ind ; i > 0 ; i -= low_bit(i))
        sol += ft[i];
    return sol;
}

void update(int val, int pos){
    for(int i = pos ; i <= N ; i += low_bit(i))
        ft[i] += val;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> N >> M;
    for(int i = 1 ; i<= N ; i++){
        cin >> A[i];
        update(A[i], i);
    }

    while(M--){
        int a, b, c;
        cin >> a;
        if(a&1 && a != 1){
            cout << "Error\n";
            cin >> b >> c;
            continue;
        }
        else if(a == 1){
            cin >> b >> c;
//            update(-A[b], b);
//            A[b] = c;
            update(c, b);
            cout << a << ' ' << A[b] + c << '\n';
        }
        else if(a % 2 == 0){
            cin >> b >> c;
            cout << a << ' ' << query(c) - query(b - 1) << '\n';
        }
    }

    return 0;
}
