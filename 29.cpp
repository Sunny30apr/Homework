#include <bits/stdc++.h>
using namespace std;

int main() {

    int n = 5;
    char a = 'A';
    for(int i=1; i<=n; i++) {

        a = a + 2*(i-1) + 1;

        for(int j=1; j<=n; j++) {
                        
            if(j <= n-i) {
                cout << " ";
            }
            
            else {
                cout << char(a-- - 1);
            }


        }
        cout << endl;
    }

return 0;
}