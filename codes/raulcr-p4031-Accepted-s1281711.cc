#include <iostream>

using namespace std;

int N;

int main()
{
    string a;
    cin >> N;
    while(N--){
        cin >> a;
        bool m = false;
        for(int i = 0 ; i < a.size() ; i++)
            if(a[i] == a[a.size() - i - 1])
                m = true;
        if(m) cout << "no\n";
        else
            cout << "yes\n";
    }
    return 0;
}
