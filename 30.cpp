#include <bits/stdc++.h>
using namespace std;

int main() {

    int n = 3;
    for(int i=1; i<=3*n; i++) {

        for(int j=1; j<=2*n-1; j++) {
        
            if(i <= n) {

                if(j <= 2*n-1-i) {
                    cout << " ";
                }

                else
                    cout << "*";
            }

            else if(i <= 2*n) {

                if(j >= i){ 
                    cout << "*";
                }

                else if(j <= i-n-1) {
                    cout << "*";
                }

                else if(j == n)
                cout << "|";

                else
                    cout << " ";

            }

            else if(i > 2*n) {

                if(j <= 3*n+1-i) {
                    cout << "*";
                }

                else
                    cout << " ";
            }

        }
    cout << endl;
    }

return 0;
}