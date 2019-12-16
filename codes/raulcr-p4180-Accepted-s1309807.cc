#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> pii;

const int MAX = 2e5 + 7;

int N, M;
pii a[MAX];
int b[MAX];

int findpos(){
    for(int i  = 1;  i<= N ; i++)
        if(a[i].second == M)
            return i;
    return -1;
}

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    cin >> N >> M;
    for(int i = 1 ; i<= N ; i++){
        int c; cin >> c;
        a[i] = pii(c, i);
    }

    for(int i = 1; i <= N ; i++)
        cin >> b[i];

    a[M] = pii(a[M].first + b[1], a[M].second);

    sort(a + 1, a + 1 + N);
    reverse(a + 1, a + 1 + N);

    int pos = findpos() + 1;
    for(int i = N ; i >= 2 && pos <= N ; i--, pos++){
        a[pos] = pii(a[pos].first + b[i], a[pos].second);
    }

    pos = findpos() - 1;
    int k = findpos();
    for(int i = 1 ; i < k && pos >= 1 ; i++, pos--){
        a[pos] = pii(a[pos].first + b[i], a[pos].second);
    }

    sort(a + 1, a + 1 + N);
    reverse(a + 1, a + 1 + N);

    pos = findpos();

    for(int i = pos ; pos > 1 ; )
        if(a[pos].first == a[pos - 1].first)
            pos = pos - 1;
        else break;

    cout << pos << '\n';

    return 0;
}
/*
5 2
51 50 50 40 30
11 10 10 9 8

3 3
20 20 10 10 10 10


11
*/
