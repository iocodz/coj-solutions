#include <bits/stdc++.h>

using namespace std;

int toInt(string &s){
    int c[27];
    memset(c, 0, sizeof c);

    for(int i = 0; i < s.size(); i++){
        c[s[i] - 'a']++;
    }

    int r = 0;

    for(int i = 0; i < 27; i++){
        if(c[i] % 2 == 1){
            r = (r | (1 << i));
        }
    }

    return r;
}
typedef long long ll;
int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    unordered_map<int, int> par;
    unordered_map<int, int> imp;

    int N; cin >>N;

    ll sol = 0;

    for(int i = 1; i <= N; i++){
        string s; cin >>s;
        int n = toInt(s);
        if(s.size() % 2 == 0){
            sol = sol + (ll)par[n];
            for(int k = 0; k < 27; k++){
                sol = sol + imp[( (n & (~(1 << k))) )];
                sol = sol + imp[( (n | ((1 << k))) )];
            }
            par[n]++;
        }else{
            sol += imp[n];
            for(int k = 0; k < 27; k++){
                sol = sol + par[( (n & (~(1 << k))) )];
                sol = sol + par[( (n | ((1 << k))) )];
            }
            imp[n]++;
        }
    }

    cout <<sol <<"\n";
    return 0;
}

