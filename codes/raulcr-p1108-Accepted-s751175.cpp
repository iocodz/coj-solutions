///by taskkill
#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1001;

int N;
int sol;
int A[MAXN];
int fq[4];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie();

    cin >> N;

    for(int i = 1 ; i <= N ; i++){
        cin >> A[i];
        fq[A[i]]++;
    }

    for(int i = 1 ; i <= fq[1] ; i++){
        if(A[i] == 2){
            bool b = false;

            //en if
            for(int j = fq[1] + 1 ; j <= fq[1] + fq[2] ; j++)
                if(A[j] == 1){
                    swap(A[i], A[j]);
                    b = true;
                    sol++;
                    break;
                }

            //en if
            if(!b)
                for(int j = fq[1] + fq[2] + 1 ; j <= N ; j++)
                    if(A[j] == 1){
                        swap(A[i], A[j]);
                        sol++;
                        break;
                    }
        }
        else if(A[i] == 3){
            bool b = false;

            for(int j = fq[1] + fq[2] + 1 ; j <= N ; j++){
                if(A[j] == 1){
                    swap(A[i], A[j]);
                    b = true;
                    sol++;
                    break;
                }
            }
            if(!b)
                for(int j = fq[1] + 1 ; j <= fq[1] + fq[2] ; j++)
                    if(A[j] == 1){
                        swap(A[i], A[j]);
                        sol++;
                        break;
                    }
        }
    }

    for(int i = fq[1] + fq[2] + 1 ; i <= N ; i++)
        if(A[i] == 2)
            sol++;

    cout << sol;

    return 0;
}
