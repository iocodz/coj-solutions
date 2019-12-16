#include <iostream>

using namespace std;

int N;
string a;

bool pal(int i, int j){
    if(i > j || i == j)
        return 1;
    if(a[i] == a[j])
        pal(i + 1, j - 1);
    else
        return 0;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for(int i = 0 ; i < N ; i++){
        cin >> a;
        bool sol = 1;
        for(auto j:a){
            if(j == 'A' || j == 'H' || j == 'I' || j == 'M' || j == 'O' || j == 'T' || j == 'U' || j == 'V' || j == 'W' || j == 'X' || j == 'Y')
                continue;
            else
                sol = 0;
        }
        if(sol && pal(0, a.size() - 1))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
