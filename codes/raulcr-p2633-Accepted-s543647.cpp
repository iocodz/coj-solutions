///By r@ul!

#include <cstdlib>
#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

double MA = 0;
double PI = 3.14159;

double C(double R, double H){
       double V;
       V = (PI / 3) * (R * R) * H;
       return V;
}
double L(double R, double H){
       double V;
       V = PI * (R * R) * H;
       return V;
}
double S(double R){
       double V;
       V = ((4* PI) / 3) * (R * R * R);
       return V;
}

double ma(double UV){
    if (UV > MA)
        MA = UV;
}

int main()
{
    double R, H, UV;
    int x;
    cin >> x;
    while (x > 0){
          string ident;
          cin >> ident;
          if (ident == "C"){
             cin >> R >> H;
             UV = C(R, H);
          }
          if (ident == "L"){
             cin >> R >> H;
             UV = L(R, H);
          }
          if (ident == "S"){
             cin >> R;
             UV = S(R);
          }
          ma(UV);
          x--;
    }
    printf ("%.3lf\n", MA);
    return 0;
}
