#include <bits/stdc++.h>
using namespace std;

int main() {

    int n=4;
    for(int i=1; i<=n; i++) {

        char a = 'A';

        for(int j=1; j<=2*n-1; j++) {

            if(j <= n-i) {
                cout << " ";
            }

            else if(j <= n) {
                cout << a;
                a++;
            }

            else if(j <= n+i-1) {
                cout << char(a-2);
                a--;
            }

        }
        cout << endl;
    }

return 0;
}