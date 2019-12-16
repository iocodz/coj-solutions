#include <bits/stdc++.h>

using namespace std;
vector<string> loca, patters;
string g;

void invertir(){
int c=g.length(),a=c/2;
for(int i=0;i<a;i++) swap(g[i],g[c-i-1]);
}

bool mache(string a, string pat){
if(pat.length() > a.length())return false;
int c=pat.length();
for(int i=0; i<c;i++) if(pat[i]!=a[i])return false;
return true;
}

int main()
{
      ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
      int n,k,cont;
cin>>n>>k;
      for(int i=0;i<n;i++)
      {
      cin>>g;
      invertir();
      loca.push_back(g);
      }

        for(int i=0;i<k;i++)
      {
      cin>>g;
      invertir();
      patters.push_back(g);
      }

    for(int i=0;i<k;i++){
        cont=0;
        for(int j=0;j<n;j++)
            if(mache(loca[j],patters[i])) cont++;

        cout<<cont<<'\n';
    }
    return 0;
}
