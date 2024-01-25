#include <bits/stdc++.h>
using namespace std;

int main() {

    int n = 5, a = 1;

    for(int i=1; i<=n; i++) {

        int b = a; 

        for(int j=1; j<=n; j++) {

            if(j <= i) {
                cout << b << " ";
            }
            b = b + i - j - n;

        }
        a = a + n + 1 - i; 
        cout << endl;
    }

return 0;
}