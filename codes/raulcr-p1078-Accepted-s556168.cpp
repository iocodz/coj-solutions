///by r@ul!
#include <iostream>

using namespace std;

int main (){
    
    int N, A;
    cin >> N;

    while (N--){
        int CN, TOT = 0;
        cin >> CN;

        for (int i = 0 ; i < CN ; i++){
            cin >> A;
            TOT += A;
        }

        if (TOT % CN == 0)
            cout << "YES\n";

        else
            cout << "NO\n";
    }

    return 0;
}
