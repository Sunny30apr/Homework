#include <bits/stdc++.h>
using namespace std;

int main() {

    int n = 4;

    for(int i=1; i<=2*n-1; i++) {

        for(int j=1; j<=2*n-1; j++) {

            if(j == i) {
                cout << "\\";
            }

            else if(j == 2*n-i) {
                cout << "/";
            }

            else 
                cout << "*";

        }
        cout << endl;
    }

return 0;
}
