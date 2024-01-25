#include <bits/stdc++.h>
using namespace std;

int main() {

    int n = 5, k=0, p;
    for(int i=1; i<=n; i++) {

            if(i%2 == 1) {
                k = k + 1;
            }
            else {
                k = k + i;
            }
            p = k;
            
        for(int j=1; j<=2*i-1; j++) {

            if(j%2 == 1) {
                if(i%2 == 0) {
                    cout << p - j/2 - i/2;
                }
                else {
                    cout << p + j/2 - i/2;
                    k++;
                }
            }

            else    
                cout << "*";
            
        }
        cout << endl;
    }

return 0;
}