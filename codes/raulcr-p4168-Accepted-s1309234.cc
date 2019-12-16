#include <bits/stdc++.h>

using namespace std;

const int MAX = 1e6 + 5;

char res[MAX], a[MAX], b[MAX], x;

int main()
{
    int N; scanf("%d", &N);
    scanf("%c", &x);
    scanf("%s", a);
    scanf("%s", b);
    int ca = N / 2, cb = N / 2, cc = 0;

    for(int i = 0; i < N; i++){
        if(a[i] == b[i]){
            res[i] = a[i];
            continue;
        }

        if(a[i] < b[i] && ca){
            res[i] = a[i];
            ca--;
        }
        if(a[i] > b[i] && cb){
            res[i] = b[i];
            cb--;
        }

        if(res[i] == 0){
            if(!ca){
                res[i] = b[i];
                cb--;
            }else if(!cb){
                res[i] = a[i];
                ca--;
            }
        }


    }

    printf("%s\n", res);
    return 0;
}

/*
2
BB
AA
*/
