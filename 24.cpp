#include <bits/stdc++.h>
using namespace std;

int main() {

    int n=7;
    for (int i=1; i<=n; i++) {

        for(int j=1; j<=n; j++) {

            if(i == 1 || i == n || j == 1 || j == n) {
                cout << "* ";
            }

            else if((i == 3 || i == n-2) && j!= 2 && j!=n-1 || (j == 3 || j == n-2) && i != 2 && i != n-1) {
                cout << "* ";
            }
            
            else 
                cout << "  ";

        }
        cout << endl;
    }

return 0;
}