#include <iostream>
#include <string>

using namespace std;

const int MAXN = 10001;

string PP[MAXN];
string P[MAXN];
int R[MAXN];
int N[MAXN];

int main()
{
    int a, b;
    cin >> a >> b;

    for (int i = 1 ; i <= a ; i++)
        cin >> PP[i] >> R[i];

    for (int i = 1 ; i <= b ; i++){
        cin >> P[i];
        bool flag = false;
        for (int j = 1 ; j <= a ; j++){
            if (P[i] == PP[j] && !flag){
                cin >> N[i];

                flag = true;

                if (N[i] == R[j])
                    cout << "ok\n";

                else
                    cout << "wrong\n";
            }
        }
        if (!flag){
            cout << "not found\n";
            flag = true;
        }
    }

    return 0;
}
