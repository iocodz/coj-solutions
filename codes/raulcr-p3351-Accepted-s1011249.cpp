#include <bits/stdc++.h>

using namespace std;

int N;
string K;

bool pal(string & a){
    int i = 0, j = a.size() - 1;
    while(i <= j){
        if(a[i] != a[j])
            return 0;
        i++; j--;
    }
    return 1;
}

int main()
{
    cin >> N;

    while(N--){
        cin >> K;

        bool f = 0;

        for(int i = 0 ; i < K.size() ; i++)
            if(K[i] < 'A' || K[i] > 'Z'){
                f = 1;
                break;
            }
            else if(K[i] != 'A' && K[i] != 'H' && K[i] != 'I' && K[i] != 'M' && K[i] != 'O' && K[i] != 'T' && K[i] != 'U' && K[i] != 'V' && K[i] != 'W' && K[i] != 'X' && K[i] != 'Y'){
                f = 1;
                break;
            }


        if(!f && pal(K))
            cout << "YES\n";

        else
            cout << "NO\n";
    }
    return 0;
}
