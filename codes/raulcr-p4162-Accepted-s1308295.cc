#include <bits/stdc++.h>

using namespace std;

#define P(p) point(p)
#define L(p0, p1) P(p0), P(p1)
#define PL(p0, p1, p2) P(p0), P(p1), P(p2)

typedef long long ll;

struct point{
    ll x, y, z;

    point(ll xx, ll yy, ll zz){
        x = xx;
        y = yy;
        z = zz;
    }

    bool isZero(){
        return abs(x) == 0 && abs(y) == 0 && abs(z) == 0;
    }

    point operator - (P(p)) const{
        return point(x - p.x, y - p.y, z - p.z);
    }

    point operator*(P(p)){
        return point(y*p.z - z*p.y, z*p.x - x*p.z, x*p.y - y*p.x);
    }

    ll operator%(P(p)){
        return x*p.x + y*p.y + z*p.z;
    }

    bool isOnLine(L(A, B)) const{
        return ( (A - *this) * (B - *this) ).isZero();
    }

    bool isOnPlane( PL(A, B, C) ) const{
        return abs((A - *this) * (B - *this) % (C - *this)) == 0;
    }
};


vector< point > arr;

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    ll N; cin >>N;

    for(ll i = 1; i <= N; i++){
        ll x, y, z;
        cin >>x >>y >>z;
        arr.push_back( point(x, y, z) );
    }

    if(N <= 3){
        cout <<"TAK\n";
        return 0;
    }

    point p0 = arr[0];
    point p1 = arr[1];
    point p2(2e9, 2e9, 2e9);

    bool f = false;

    for(auto p : arr){
        if( !p.isOnLine(L(p0, p1)) ){
            p2 = p;
            f = true;
            break;
        }
    }

    if(!f){
        cout <<"TAK\n";
    }else{
        f = false;
        for(auto p : arr){
            if( !p.isOnPlane(p0, p1, p2) ){
                cout <<"NIE\n";
                f = true;
                break;
            }
        }
        if(!f) cout <<"TAK\n";
    }
    return 0;
}
