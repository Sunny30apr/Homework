#include <bits/stdc++.h>
using namespace std;

int main() {

    int n = 5;
    for(int i=1; i<=n; i++) {

        for(int j=1; j<=2*n-1; j++) {

            if(j <= n-i+1) {
                cout << "*";
            }
            else if(j <= n+i-2) 
                cout << " ";
            
            else
                cout << "*";

        }
        cout << endl;
    }

    for(int i=2; i<=n; i++) {

        for(int j=1; j<=2*n-1; j++) {

            if(j <= i) {
                cout << "*";
            }
            
            else if(j <= 2*n-i-1) 
                cout << " ";
            
            else
                cout << "*";

        }
        cout << endl;
    }

return 0;
}