#include <bits/stdc++.h>
using namespace std;

int main() {

    int n = 5;
    for(int i=1; i<=n; i++) {

        int a = i;
        
        for(int j=1; j<=2*n-1; j++) {

            if(j <= n-i) {
                cout << " ";
            }

            else if(j <= n) {
                cout << a;
                a--;
            }

            else if(j <= n+i-1) {
                cout << a+2;
                a++;
            }

        }
        cout << endl;
    }

return 0;
}