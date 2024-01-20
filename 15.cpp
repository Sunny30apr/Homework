#include <bits/stdc++.h>
using namespace std;

int main() {

    int n = 5;
    
    for(int i=1; i<=n; i++) {
        
        int a=1;

        for(int j=1; j<=n; j++) {

            if(j <= n-i) {
                cout << " ";
            }

            else if(j <= n) {
                cout << a;
                a++;
            }

        }
        cout << endl;
    }

    for(int i=1; i<=n; i++) {
        
        int a=1;

        for(int j=1; j<=n; j++) {

            if(j <= i) {
                cout << " ";
            }

            else if(j <= n) {
                cout << a;
                a++;
            }

        }
        cout << endl;
    }

return 0;
}