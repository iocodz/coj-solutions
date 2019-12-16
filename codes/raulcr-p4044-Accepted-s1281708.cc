#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N, B, suma = 0, suma2 = 0;
	cin >> B >> N;
	vector<int> b;
	for(int i = 1 ; i <= N ; i++){
		int a;
		cin >> a;
		b.push_back(a);
		suma += a;
	}

    if(B > suma){
cout << 1 << '\n';
return 0;

}
	
	sort(b.begin(), b.end());
	int p = N;
	for(int i = 1 ; i <= N ; i++){
		suma2 += b[p];
		suma -= b[p];
		if(suma2 + B > suma){
			cout << i << '\n';
			break;
		}
		p--;
	}
	
	
    return 0;
}
