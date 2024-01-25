#include <bits/stdc++.h>
using namespace std;

int main() {

    int n = 6;
   

    for(int i=1; i<=n; i++) {
        
        int a = 1;
        char b = 'A';

        for(int j=1; j<=n; j++) {

            if(j <= n-i) {
                cout << " ";
            }

            else if(i%2 == 1) {
                
                cout << a++ << " ";
            }

            else
                cout << b++ << " ";


        }
        cout << endl;
    }

return 0;
}