#include <bits/stdc++.h>

using namespace std;

int N, sol;
string a[101], b[101];

int main()
{
    cin >> N;
    for(int i = 0 ; i < N ; i++)
        cin >> a[i];

    b[0] = "sunny";
    for(int i = 1 ; i < N ; i++){
        if(a[i - 1] == "sunny"){
            b[i] = "sunny";
        }
        else if(a[i - 1] == "rainy"){
            b[i] = "rainy";
        }
        else if(i >= 3 && a[i - 1] == a[i - 2] && a[i - 2] == a[i - 3] && a[i - 1] == "cloudy"){
            b[i] = "rainy";
        }
        else if(a[i - 1] == "cloudy"){
            b[i] = "cloudy";
        }
    }

    for(int i = 0 ; i < N ; i++)
        if(a[i] == b[i])
            sol++;


    cout << sol;


    return 0;
}
