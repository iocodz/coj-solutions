#include <bits/stdc++.h>

using namespace std;

vector<int> num;
//set<pair<int,int> > mapa;
int suma[1005],n,m,total;

bool mapa[1005][1005];


bool f(int i, int val){
if(i>n) return (val%m == 0);

//if(val>0) if(val-(total-suma[i-1])>0) return false;
//if(val<0) if(val+(total-suma[i-1])<0) return false;

if(mapa[i][val]) return false;

int a,b;
a=val+num[i];
b=val-num[i];
bool s1;

//if(a>0)
    s1=f(i+1,a%m);
//else s1=f(i+1,a);

if(s1) return true;

//if(b>0)
    s1=f(i+1,b%m);
//else s1=f(i+1,b);

if(s1) return true;

mapa[i][val]=true;
return false;

}



int main(){
   ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

   int x;
   cin>>n>>m;
   for(int i=0; i< n;i++){
    cin>>x;
    x%=m;
    if(x)num.push_back(x);
   }
   n=num.size();
   if(n){
   suma[0]=0;
   for(int i=1; i<=n;i++) suma[i]=suma[i-1]+num[i-1];
    total=suma[n];
    if(f(0,0)) cout<<"valid\n";
    else cout<<"invalid\n";
   // cout<<total;
   }else cout<<"valid\n";
    return 0;

}
