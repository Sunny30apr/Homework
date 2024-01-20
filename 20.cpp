#include <bits/stdc++.h>
using namespace std;

int main() {

    int n=4;
    for(int i=1; i<=n; i++) {

        char a = 'A';
        int b = 1;

        for(int j=1; j<=2*n; j++) {

            if(j <= n-i) {
                cout << " ";
            }

            else if(j <= n) {
                cout << a;
                a++;
            }

            else if(j <= n+i) {
                cout << b;
                b++;
            }
    
        }
        cout << endl;
    }
    
return 0;
}