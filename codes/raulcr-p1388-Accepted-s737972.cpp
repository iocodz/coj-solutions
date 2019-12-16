#include <bits/stdc++.h>

using namespace std;
int pot( int f, int g){
    if(g==0){
        return 1;
    }
    if(g%2==0){
        int m=pot(f,g/2);
        return (m*m) % 10;
    }
    else{
        return (pot(f,g-1)*f) % 10;
    }

}

int main()
{
//    freopen("1388.in","r",stdin);
//    freopen("1388.out","w",stdout);
    int n,a,b;
    cin >>n;
    for(int r = 0;r < n;r++){
        cin >>a>>b;
        unsigned long long z=pot(a,b);
        cout << z << '\n';
    }
    return 0;
}
