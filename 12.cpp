#include <bits/stdc++.h>
using namespace std;

int main() {

    int n = 4;
    for(int i=1; i<=n; i++) {

        for(int j =0; j<=2*n-1; j++) {

            if(j < i) {
                cout << " ";
            }

            else if(j <= 2*n - i) {
                cout << "*";
            }
        }
        cout << endl;
    }
return 0;
}