#include <bits/stdc++.h>
using namespace std;

int main() {

    int n = 4;

    for(int i=1; i<=n; i++) {

        char a = 'A';

        for(int j=1; j<=2*n-1; j++) {

            if(j > n-i+1 && j < n+i-1) {
                cout << " ";
                a++;
            }

            else 
                cout << a++;
        } 
        cout << endl;   
    }

return 0;
}