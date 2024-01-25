#include <bits/stdc++.h>
using namespace std;

int main() {

    int n = 4, x=n;

    for(int i=1; i<=n*n; i++) {

        if(i < x) {
            cout << " ";
        }

        else {
             cout << "* ";
        }
        
        if(i%n == 0) {
            x = x + n - 1;
            cout << endl;
        }
    }

return 0;
}