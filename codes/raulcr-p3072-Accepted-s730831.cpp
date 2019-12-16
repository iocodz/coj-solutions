#include<bits/stdc++.h>

using namespace std;

int N;

int main(){
	cin >> N;
	if(N % 2 == 0 && N != 2)
		cout << "YES\n";
	else
		cout << "NO\n";
	return 0;
}