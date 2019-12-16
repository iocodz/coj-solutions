#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

typedef long long int lli;

const int maxn = 10e3 + 5;

lli arr[maxn];

void calc(int a){

    for(int i = 1; i <= a; i++){
        if(arr[i] == 0){
            arr[i] = arr[i - 1];
            for(int j = 1; j <= i; j++){
                if(__gcd(i, j) == 1){
                    arr[i] += 2;
                }
            }
        }
    }
}

int main()
{
    arr[1] = 3;
    int cont;
    scanf("%d", &cont);

    for(int i = 1; i <= cont; i++){
        int a;
        scanf("%d", &a);

        if(arr[a] == 0){
            calc(a);
        }
        cout << i << " " << a << " " << arr[a] << "\n";
    }

    return 0;
}
