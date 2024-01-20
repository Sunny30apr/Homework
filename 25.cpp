#include <bits/stdc++.h>
using namespace std;

int main() {

    int n = 9;
    
    for(int i=0; i<=n+1; i++) {

        for(int j=0; j<=2*(n+1); j++) {

            int a = (2*i+j);
            int b = (2*i+n+1-j);

            if(j <= n-i) {
                cout << "  ";
            }
            
            else if(j <= n+1) {
                cout << a%(n+1) << " ";
            }

            else if(j <= n+i+1)  {
                cout << b%(n+1) << " ";
            }   

        }
        cout << endl;
    }

    for(int i=0; i<=n+1; i++) {

        for(int j=0; j<=2*(n+1); j++) {

            int a = (n+j-2*i-1);
            int b = (3*n-2*i-j+1);

            if(j <= i) {
                cout << "  ";
            }
            
            else if(j <= n+1) {
                cout << a%(n+1) << " ";
            }

            else if(j <= 2*n-i+1)  {
                cout << b%(n+1) << " ";
            }   

        }
        cout << endl;
    }

return 0;
}