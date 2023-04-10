#include <iostream> 
using namespace std; 

int main () {
    int i, j, k, l, m, n, b;

    cout << "Enter a positive integer: ";
    cin >> n;

    for (i = 0; i <= n - 1; i++) {
        cout << endl;

        for (k = 65; k <= 65 + n - i - 1; k++) {
            cout << (char) k;
        }

        for (j = 1; j <= 2 * i - 1; j++) {
            cout << " ";
        }

        for (l = 65 + n - i - 1; l >= 65; l--) {
            if (l == 65 + n - 1)
                continue;
            cout << (char) l;
        }
    }

    for (i = n; i <= 2 * n - 2; i++) {
        cout << endl;

        for (m = 65; m <= 65 + i - n + 1; m++) {
            cout << (char) m;
        }
       

        for (b = 1; b <= 2*(2 * n - i - 2)-1; b++) {
            cout << " ";
        }  
        
        for (l = 65 + i-n+1; l >= 65; l--) {
            if (l == 65 + n - 1){
                continue;}
            cout << (char) l;
        }
        }
  
   
    cout << endl;
    return 0; 
}