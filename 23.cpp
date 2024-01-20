#include <bits/stdc++.h>
using namespace std;

int main() {

    int n=6;
    for(int i=1; i<=n; i++) {

        for(int j=1; j<=n; j++) {

            if(j <= i && j%2 == 1) {
                cout << "1";
            }

            else if(j <= i) {
                cout << "0";
            }

        }
        cout << endl;
    }

return 0;
}