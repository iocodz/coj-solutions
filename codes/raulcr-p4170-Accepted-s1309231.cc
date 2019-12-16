#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;

struct hasher {ll b = 1e6 + 7, m; vi h, p;
    hasher(){}
    hasher(vector<ll> s, ll _m) : m(_m), h(s.size() + 1), p(s.size() + 1){
        p[0] = 1; h[0] = 0;
        for(ll i = 0; i < s.size(); i++)
            p[i + 1] = (ll)p[i] * b % m;
        for(ll i = 0; i < s.size(); i++)
            h[i + 1] = ((ll)h[i] * b + s[i]) % m;}
    ll hash(ll l, ll r){
        return (h[r + 1] + m - (ll)h[l] * p[r - l + 1] % m) % m;
    }
};

struct hasher2 {ll b = 311311, m; vi h, p;
    hasher2(){}
    hasher2(vector<ll> s, ll _m) : m(_m), h(s.size() + 1), p(s.size() + 1){
        p[0] = 1; h[0] = 0;
        for(ll i = 0; i < s.size(); i++)
            p[i + 1] = (ll)p[i] * b % m;
        for(ll i = 0; i < s.size(); i++)
            h[i + 1] = ((ll)h[i] * b + s[i]) % m;}
    ll hash(ll l, ll r){
        return (h[r + 1] + m - (ll)h[l] * p[r - l + 1] % m) % m;
    }
};

struct hasher3 {ll b = 4319, m; vi h, p;
    hasher3(){}
    hasher3(vector<ll> s, ll _m) : m(_m), h(s.size() + 1), p(s.size() + 1){
        p[0] = 1; h[0] = 0;
        for(ll i = 0; i < s.size(); i++)
            p[i + 1] = (ll)p[i] * b % m;
        for(ll i = 0; i < s.size(); i++)
            h[i + 1] = ((ll)h[i] * b + s[i]) % m;}
    ll hash(ll l, ll r){
        return (h[r + 1] + m - (ll)h[l] * p[r - l + 1] % m) % m;
    }
};

ll N;

hasher ab, ba;
hasher2 ab2, ba2;
hasher3 ab3, ba3;

ll test(ll k){
    set< tuple<ll, ll, ll> > now;
    ll step = N / k;

    for(ll i = 0; i < step; i++){
        ll ini = i * k;
        ll fin = (i + 1) * k - 1;
        ll h11 = ab.hash(ini, fin);
        ll h12 = ba.hash(N - 1 - fin, N - 1 - ini);

        ll h21 = ab2.hash(ini, fin);
        ll h22 = ba2.hash(N - 1 - fin, N - 1 - ini);

        ll h31 = ab3.hash(ini, fin);
        ll h32 = ba3.hash(N - 1 - fin, N - 1 - ini);


//        cout <<ini <<" " <<fin <<" - "  <<N-1-fin <<" " <<N-1-ini <<"\n";
//        cout <<h1 <<" - "  <<h2 <<"\n";

        if(!now.count( make_tuple(h12, h22, h32) )){
            now.insert(make_tuple(h11, h21, h31));
        }
    }

    return now.size();
}

int mapa[int(1e6 + 5)];
int Ntotal;

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(0);

//    freopen("in.in", "r", stdin);

    cin >>N;

//    if(N > 1e4){
//        int x = 0/0;
//        return 0;
//    }

    vector<ll> arr;

    for(ll i = 0 ; i < N; i++){
        ll x; cin >>x;
        if(mapa[x] == 0) Ntotal++;
        mapa[x]++;
        arr.push_back(x);
    }


    ab = hasher(arr, 1e9 + 9);
    ab2 = hasher2(arr, 1e9 + 7);
    ab3 = hasher3(arr, 1e6 + 7);
    reverse(arr.begin(), arr.end());
    ba = hasher(arr, 1e9 + 9);
    ba2 = hasher2(arr, 1e9 + 7);
    ba3 = hasher3(arr, 1e6 + 7);

    int sol = Ntotal;

    set<int> here;

    here.insert(1);

    for(int i = 2; i <= N; i++){
        int s = test(i);
        if(s > sol){
            sol = s;
            here.clear();
            here.insert(i);
        }else if(s == sol){
            here.insert(i);
        }else{

        }
    }

    cout <<sol <<" " <<here.size() <<"\n";
    auto x = here.begin();
    cout <<*x;
    x++;
    while(x != here.end()){
        cout <<" " <<*x;
        x++;
    }
    cout <<"\n";
    return 0;
}
