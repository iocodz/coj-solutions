#include <bits/stdc++.h>

using namespace std;

vector<int> xs;
vector<int> ys;

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int N, T;

    cin >>T;

    while(T--){
        xs.clear();
        ys.clear();
        cin >>N;

        for(int i = 1; i <= N; i++){
            int x, y; cin >>x >>y;
            xs.push_back(x + y);
            ys.push_back(x - y);
        }

        sort(xs.begin(), xs.end());
        sort(ys.begin(), ys.end());

        cout <<max(xs[xs.size() - 1] - xs[0],  ys[ys.size() - 1] - ys[0]) <<"\n";
    }
    return 0;
}
