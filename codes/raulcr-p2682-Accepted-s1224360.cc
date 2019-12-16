#include <bits/stdc++.h>

using namespace std;

int N;
string a, b;

int main() {
    cin >> N;

    cin >> a >> b;
    N = N % 2;
    if(N == 1){
    bool f = true;
    for(int i = 0 ; i < a.size() ; i++){
        if((a[i] == '0' && b[i] == '0') || (a[i] == '1' && b[i] == '1')){
            f = false;
            break;
        }
    }
    if(f)
        cout << "Deletion succeeded\n";
    else
        cout << "Deletion failed\n";
    }
    else{
        if(a == b)
        cout << "Deletion succeeded\n";
    else
        cout << "Deletion failed\n";
    }
    return 0;
}
