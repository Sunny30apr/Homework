#include <bits/stdc++.h>
using namespace std;

int main() {

    int n = 5;
    int i = 1;

    while(i <= n) {
        int j = 1;

        while(j <= i-1) {
            cout << "  ";
            j++;
        }

        j = 1;
        while(j <= n-i+1) {
            cout << "* ";
            j++;
        }

    cout << endl;
    i++;
    }

return 0;
}