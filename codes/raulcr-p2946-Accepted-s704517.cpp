#include <iostream>

using namespace std;

int TA[100001];

int main(){
	int N;
	cin >> N;

	for(int i = 1 ; i <= 100000 ; i++){
		if(i % 2 == 0){
			TA[i] = i / 2;
            while(TA[i] % 2 == 0)
                TA[i] /= 2;
		}
		else
			TA[i] = i * 2;
	}

	while(N--){
		int a;
		cin >> a;

		cout << TA[a] << '\n';

	}

	return 0;
}
