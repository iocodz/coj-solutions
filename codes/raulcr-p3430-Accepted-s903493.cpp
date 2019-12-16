#include <bits/stdc++.h>

using namespace std;

#define abi pa.top()

string A;
stack<int> pa;
//stack<int> pc;

void rev(int i, int j){
    for( ; i < j ; i++ , j--)
        swap(A[i], A[j]);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    getline(cin, A);

    for(int i = 0 ; i < A.size() ; i++)
        if(A[i] == '(')
            pa.push(i + 1);
        else if(A[i] == ')'){
//            pc.push(i - 1);
            rev(abi, i - 1);
            pa.pop();
        }

//    while(pa.size() != 0){
//        rev(abi, cer);
//
////        cout << abi << ' ' << cer << '\n';
//
//        pa.pop();
//        pc.pop();
//    }

    for(int i = 0 ; i < A.size() ; i++)
        if(A[i] != '(' && A[i] != ')')
            cout << A[i];

    return 0;
}