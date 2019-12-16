#include <bits/stdc++.h>

using namespace std;

int N;
string a;

bool pal(int i, int j){
    while(i < j){
        if(a[i] != a[j]) return 0;
        i++;
        j--;
    }
    return 1;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> N;
    while(N--){
        cin >> a;
        if(pal(0, a.size() - 1))
            cout << "palindrome\n";
        else{
            bool f = 0;
            for(int i = 0 ; i < a.size() - 1 ; i++)
                if(pal(0, i) && pal(i + 1, a.size() - 1)){
                    cout << "bi-palindrome\n";
                    f = 1;
                    break;
                }
            if(!f)
                cout << "non-palindrome\n";
        }
    }
    return 0;
}
