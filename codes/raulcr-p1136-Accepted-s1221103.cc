#include <bits/stdc++.h>

using namespace std;

const int MAXN = 35000;

int N, a, b;
bool mk[MAXN];
vector<int> primos;

void criba(){
    fill(mk, mk + MAXN, true);

    mk[1] = false;

    for(int i = 2 ; i < MAXN ; i++){
        if(mk[i] == true){
            primos.push_back(i);
            for(int j = i * 2 ; j < MAXN ; j += i){
                mk[j] = false;
            }
        }
    }
}

bool prime(int n){
    if(n == 1 || n % 2 == 0) return false;

    for(int i = 0 ; i < primos.size() && primos[i] * primos[i] <= n ; i++)
        if(n % primos[i] == 0)
            return false;
    return true;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    criba();

    cin >> N;

    while(N--){
        cin >> a >> b;

        for(int i =  a ; i <= b ; i++)
            if(prime(i)) cout << i << '\n';
        cout << '\n';
    }
	return 0;
}
