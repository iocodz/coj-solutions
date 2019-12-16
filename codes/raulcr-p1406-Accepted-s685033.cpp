#include <bits/stdc++.h>


using namespace std;

const int MAXN = 1e6 + 1;
int T[MAXN];

char A[MAXN + 2];

int main(){
//    freopen("A.txt", "r", stdin);
    int j = 1;
    //string A;

    while(scanf("%s", A) != EOF){
        int Lon = strlen(A);
        for (int i = 1 ; i < Lon ; i++){
            if(A[i] != A[i - 1])
                T[i] = T[i - 1] + 1;
            else
                T[i] = T[i - 1];
        }//001100

        int N;
        //cin >> N;
        scanf("%d", &N);

        //cout << "Case " << j << ":\n";
        printf("Case %d:\n", j);

        while(N--){
            int K, L;
            //cin >> K >> L;
            scanf("%d%d", &K, &L);
            if(K > L)
                swap(K, L);

            if(T[L] == T[K])
                //cout << "Yes\n";
                printf("Yes\n");
            else
                printf("No\n");
                //cout << "No\n";
        }
        j++;
    }
	return 0;
}
