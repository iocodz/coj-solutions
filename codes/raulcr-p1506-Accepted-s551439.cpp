///by r@ul!

#include <string>
#include <cstdio>
#include <iostream>

using namespace std;

double punt(string a, string b){
    double nota = 0;
    for(int i = 0 ; i < a.length() ; i++){
        if(b[i] != '#'){
              if(a[i] == b[i])
                nota += 1.00;
              else if(a[i] != b[i])
                nota -= 0.25;
              else
                nota = nota;
        }
    }
    return nota;
}

int main()
{
    int nq, est;
    string sol;
    cin >> nq >> sol >> est;
    while(est > 0){
         string solalm;
         double s;
         cin >> solalm;
         if(solalm == sol)
            cout << nq << ".00\n";
         else{
            s = punt(sol, solalm);
            printf("%.2lf\n" , s);
         }
         est--;
    }
    return 0;
}
