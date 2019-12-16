#include <bits/stdc++.h>

using namespace std;

int movx[] = {2, 0, 1, 0, 2, 0, 1, 0};
int movy[] = {0, 1, 0, -1, 0, 1, 0, -1};

vector<int> xsol, ysol, y;

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int N; cin >>N;

    int xi = 0;
    int yi = 2;
    int yn = 0;

    xsol.push_back(xi);
    ysol.push_back(yi);
    y.push_back(yn);

    if(N % 2 != 0){
        cout <<"NIE\n";
    }else{
        int m = N;
        if(N % 4 != 0){
            m -= 2;
        }
        for(int i = 1 ; i <= m / 2 ;){
            for(int j = 0 ; j < 8 ; j++){
                i++;
                xi += movx[j];
                yi += movy[j];
                if(i > m / 2) break;
                xsol.push_back(xi);
                ysol.push_back(yi);
                yn += movy[j] * -1;
                y.push_back(yn);
            }
        }

        if(N % 4 != 0){
            for(int i = 0 ; i < y.size() ; i++)
                cout << xsol[i] << ' ' << y[i] << '\n';
            for(int i = xsol.size() - 1 ; i >= 1 ; i--)
                cout << xsol[i] << ' ' << ysol[i] << '\n';
            cout << "1 2\n";
            cout << "1 4\n";
            cout << "0 4\n";
        }
        else{
            for(int i = 0 ; i < y.size() ; i++)
                cout << xsol[i] << ' ' << y[i] << '\n';
            for(int i = xsol.size() - 1 ; i >= 0 ; i--)
                cout << xsol[i] << ' ' << ysol[i] << '\n';
        }
    }

    return 0;
}
