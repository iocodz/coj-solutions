#include<iostream>

using namespace std;

typedef unsigned long long ull;

ull a, b, c;


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

	cin >> a;
	for(int i = 0 ; i < 10 ; i++){
		a *= 13821;
        a = a % 32768;
        b = a % 7 + 1;
        cout << a << " : " << b << '\n';
	}
	return 0;
}
