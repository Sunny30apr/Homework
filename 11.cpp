#include <bits/stdc++.h>
using namespace std;

int main() {

    int n = 4;
    for(int i=1; i<=n; i++) {

        for(int j=1; j<=n; j++) {

            if(j <= i) {
                cout << "*";
            }
        }
        cout << endl;
    }

    for(int i=2; i<=n; i++) {

        for(int j=1; j<=n; j++) {

            if(j <= n-i+1) {
                cout << "*";
            }
        }
        cout << endl;
    }

return 0;
}