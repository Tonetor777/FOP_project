#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

int main () {
     //CONVERSION From DECIMAL
 int num,dec_count=0,nbinary, reminder, dec_binary[32];
    cout << "Enter a Decinal number\n";
    cin >> num;
// changing decimal to binary
    nbinary = num;
    for (int i = 0; nbinary != 0; i++) {
        reminder = nbinary % 2;
        nbinary = nbinary / 2;
        dec_binary[i] = reminder;
        dec_count++;
    }
    cout << "The corrosponding Binary number is: ";
   for (int i = dec_count - 1; i >=0 ; i-- ) {
        cout << dec_binary[i] ;
    }
// changing decimal to octal
    cout << "\n.....................................\n";
    int octcount = 0, noctal, octrem, octal[32];
    noctal = num;

     for (int i = 0; noctal!= 0; i++) {
        octrem = noctal % 8;
        noctal = noctal/ 8;
        octal[i] = octrem;
        octcount++;
    }
       cout << "The corrosponding Octal number is: ";
   for (int i = octcount - 1; i >=0 ; i-- ) {
        cout << octal[i];
    }
    cout << "\n.....................................\n";
    return 0;
}
