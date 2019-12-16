#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> pii;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N;
    string a;
    cin >> a >> N;
    for(int i = 0 ; i < a.size() ; i++){
        if(a[i] == '9' || !N) continue;
        int pos = i;
        for(int j = i + 1; j < a.size() && j - i <= N ; j++)
            if(a[j] > a[pos]){
                pos = j;
            }

        if(pos > i){

        for(int k = pos - 1 ; k >= i ; k--)
            swap(a[k], a[k + 1]);
        N -= (pos - i);
        }
    }

    cout << a << '\n';


    return 0;
}
