#include <bits/stdc++.h>
#define pii pair<int, int>
using namespace std;
typedef  complex<double> P;
const double EPS= 1e-8;

struct L: public vector<P>{
L(const P & a, const P & b){
push_back(a);
push_back(b);
}
};

double cross(P a, P b){
return imag(conj(a)*b);
}

double dot(P a, P b){
return real(conj(a)* b);
}

P projection(L l, P p){
double t = dot(p - l[0], l[0]- l[1])/ norm(l[0]- l[1]);
return  l[0] + t*(l[0]-l[1]);
}

double distanceLP(L l, P p){
return abs(p- projection(l,p));
}

P crosspoint(L l, L m){
double A= cross(l[1]- l[0], m[1]-m[0]);
double B= cross(l[1]- l[0], l[1]-m[0]);
if(abs(A)<EPS && abs(B)< EPS)
    return m[0];
if(abs(A) < EPS)
    return P(0,0);
return  m[0]+ B/A * (m[1]-m[0]);
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int x,y, a,b,c,d;
cin>>x>>y>>a>>b>>c>>d;
x+=1000001;
y+=1000001;
a+=1000001;
b+=1000001;
c+=1000001;
d+=1000001;

P p= P(x,y);
P A= P(a,b);
P B =P(c,d);
L l= L(A,B);
P p2=projection(l,p);
L l2= L(p,p2);
P inter= crosspoint(l, l2);
double sol = distanceLP(l,p);
cout<<setprecision(3)<<fixed;
cout<<(inter.real()-1000001)<<" "<<(inter.imag()-1000001)<<" "<<sol<<'\n';
    return 0;
}
