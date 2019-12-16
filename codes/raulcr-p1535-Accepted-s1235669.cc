#include <bits/stdc++.h>

using namespace std;

int N;
int t[200], a[200];

bool ord(){
    bool ok = 1;
    for(int i = 2 ; i <= 10 ; i++)
        ok = ok && (a[i] > a[i - 1]);
    return ok;
}

bool ordi(){
    bool ok = 1;
    for(int i = 10 ; i >= 2 ; i--)
        ok = ok && (a[i] < a[i - 1]);
    return ok;
}

int main()
{
    cin >> N;
    cout << "Lumberjacks:\n";
    while(N--){
        for(int i = 1  ; i <= 10 ; i++)
            cin >> a[i];

        if(ord() || ordi())
            cout << "Ordered\n";
        else
            cout << "Unordered\n";

    }
    return 0;
}
