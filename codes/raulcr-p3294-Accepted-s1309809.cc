#include <bits/stdc++.h>

using namespace std;
#define mid (ini+fin)/2
const int MAX = 2e6 + 5;

int st1[4*MAX];
int st2[4*MAX];

int criba[MAX];

int arr[MAX];

void built1(int n, int ini, int fin){
    if(ini == fin){
        st1[n] = !criba[arr[ini]];
    }else{
        built1(n*2, ini, mid);
        built1(n*2 + 1, mid+1, fin);
        st1[n] = st1[n*2] + st1[n*2+1];
    }
}

int query1(int n, int ini, int fin, int a, int b){
    if(ini > b || fin < a){
        return 0;
    }else if(ini >= a && fin <= b){
        return st1[n];
    }else{
        return query1(n*2, ini, mid, a, b) + query1(n*2+1, mid+1, fin, a, b);
    }
}

void update1(int n, int ini, int fin, int p, int v){
    if(ini > p || fin < p){
        return;
    }else if(ini >= p && fin <= p){
        st1[n] = v;
    }else{
        update1(n*2, ini, mid, p, v);
        update1(n*2+1, mid+1, fin, p, v);
        st1[n] = st1[n*2] + st1[n*2+1];
    }
}

void built2(int n, int ini, int fin){
    if(ini == fin){
        st2[n] = criba[ arr[ini] ] ? arr[ini] : 0;
    }else{
        built2(n*2, ini, mid);
        built2(n*2 + 1, mid+1, fin);
        st2[n] = max(st2[n*2], st2[n*2+1]);
    }
}

int query2(int n, int ini, int fin, int a, int b){
    if(ini > b || fin < a){
        return 0;
    }else if(ini >= a && fin <= b){
        return st2[n];
    }else{
        return max(query2(n*2, ini, mid, a, b), query2(n*2+1, mid+1, fin, a, b));
    }
}

void update2(int n, int ini, int fin, int p, int v){
    if(ini > p || fin < p){
        return;
    }else if(ini >= p && fin <= p){
        st2[n] = v;
    }else{
        update2(n*2, ini, mid, p, v);
        update2(n*2+1, mid+1, fin, p, v);
        st2[n] = max(st2[n*2], st2[n*2+1]);
    }
}

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    criba[1] = true;

    for(int i = 2; i * i < MAX; i++){
        if(!criba[i])
            for(int j = i*2; j < MAX; j+=i){
                criba[j] = true;
            }
    }

    int N, Q; cin >>N >>Q;

    for(int i = 1; i <= N; i++){
        cin >>arr[i];
    }

    built1(1, 1, N);
    built2(1, 1, N);

    while(Q--){
        int t, a, b; cin >>t >>a >>b;
        if(t == 1){
            if(!criba[b]){
                update1(1, 1, N, a, 1);
                update2(1, 1, N, a, 0);
            }else{
                update1(1, 1, N, a, 0);
                update2(1, 1, N, a, b);
            }
        }else if(t == 2){
            cout <<query1(1, 1, N, a, b) <<"\n";
        }else{
            int r = query2(1, 1, N, a, b);
            if(r == 0){
                cout <<"NO ANSWER\n";
            }else{
                cout <<r <<"\n";
            }
        }
    }

    return 0;
}
