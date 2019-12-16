///by r@ul!

#include <string>
#include <cstdio>
#include <iostream>

using namespace std;

double cm[100];

int main()
{
    string nt, nj;
    int cj, cc, cont = 0;
    double med = 0;
    cin >> nt >> cj;
    cc = cj;
    cout << "Tournament: " << nt << '\n';
    cout << "Number of players: " << cj << '\n';
    cout << "New ratings:\n";

    while(cc > 0){
          int ra, k;
          double w, we, r;
          cin >> nj;
          cin >> ra >> w >> we >> k;
          r = ra + k * (w - we);
          cm[cont] = ra;
          cout << nj << " " << ra + k * (w - we) << '\n';
          cont++;
          cc--;
    }
    for(int i = 0 ; i <= cont ; i++){
        med += cm[i];
    }
    med /= cj;
    printf("Media Elo: ");
    printf("%.0lf\n", med);
    return 0;
}
