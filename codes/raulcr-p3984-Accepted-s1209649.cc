#include <bits/stdc++.h>
using namespace std;



int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    string g;
    cin>>g;
    int c=g.length();
    int cont=1;
    char fin=g[0];
    int num=1, maximo=1;
    char x=g[0];
    for(int i=1;i<c;i++){
        if(g[i]==x){
            cont++;
        }else{
        if(cont>maximo){
            maximo=cont;
            fin=x;
        }
        x=g[i];
        cont=1;

        }
    }
     if(cont>maximo){
            maximo=cont;
            fin=x;
    }
    cout<<maximo<<" "<<fin<<'\n';

    return 0;
}
