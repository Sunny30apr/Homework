#include <bits/stdc++.h>
using namespace std;

int main() {

    int n = 5;
    
    for(int i = 1; i <= n; i++) {

        for(int j = 1; j <= 2*n-1; j++) {

            if(j <= n-i+1) {
                char s = 'A' + j - 1;
                cout << s;
            }

            else if(j >= n+i-1) {
                char t = 'A' + 2*n - j - 1;
                cout << t;
            }

            else
                cout << " ";
        }

        cout << endl;
    }

return 0;
}