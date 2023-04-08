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
    //changing decimal to hexadecimal
int hexrem,hexcount=0,hexa[32],nhex=num;
     for(int i=0; nhex != 0;i++){
        hexrem = nhex%16;
        nhex/=16;
        hexa[i]=hexrem;
        hexcount++;
    }
     cout << "The corrosponding Hexadecimal number is: ";
    for(int i=hexcount-1;i>=0;i--){
     switch(hexa[i]){
       case 10:cout<<"A";
         break;
       case 11:cout<<"B";
         break;
       case 12:cout<<"C";
         break;
       case 13:cout<<"D";
         break;
       case 14:cout<<"E";
         break;
       case 15:cout<<"F";
         break;
      default:
         cout<<hexa[i];
     }
    }
    cout << "\n.....................................\n\n";
         //CONVERSION From BINARY
    //binary to decimal
    int bisum = 0, binum, digit, power = 0;
    cout << "Enter the Binary number\n";
    cin >> binum;
    int biocnum = binum,bihexnum=binum, biocsum;
    while ( binum != 0) {
         digit = binum % 10;
         binum /= 10;
         bisum = bisum + (digit * pow (2, power));
         power ++;
        }
        cout<<"The corrosponding decimal number is: ";
        cout << bisum;
     cout << "\n.....................................\n";
      // binary to octal
    int ocbinum [8],ocount = 0;
    for (int j = 0; biocnum != 0; j++) {
        biocsum = 0;
        power = 0;
        for (int i = 0 ; i < 3; i++) {
         digit = biocnum % 10;
         biocnum /= 10;
         biocsum = biocsum + (digit * pow (2, power));
         power ++;
         }
        ocbinum [j] = biocsum;
        ocount++;
    }
    cout<<"The corrosponding octal number is: ";
     for (int i = ocount - 1; i >=0 ; i-- ) {
        cout << ocbinum[i];
    }
 cout << "\n.....................................\n";
 // Binary to hexadecimal
    int bihexsum=0,hcount=0,hex[32];
    cout<<"The corrosponding hexadecimal number is: ";
    int counthex=0;
    for(int i=0;bihexnum!=0;i++){
      while(hcount<4 && bihexnum!=0){
          digit =bihexnum%10;
          bihexsum = bihexsum + pow(2,hcount)*digit;
          hcount++;
          bihexnum/=10;
        }
      hex[i]=bihexsum;
      hcount=0;
      bihexsum=0;
      counthex++;
    }
    for(int j=counthex-1;j>=0;j--){
     switch(hex[j]){
       case 10:cout<<"A";
         break;
      case 11:cout<<"B";
         break;
      case 12:cout<<"C";
         break;
      case 13:cout<<"D";
         break;
      case 14:cout<<"E";
         break;
     case 15:cout<<"F";
         break;
     default:
         cout<<hex[j];
 }

}
 cout << "\n.....................................\n\n";
  //CONVERSION From OCTAL
 int octnum,count=0,rem,oct_digit, binary[16][16],ocsum = 0, pwr=0,ch=0;
    cout<<"Enter the octal number\n";
    cin >> octnum;
    int octdec = octnum;
    int octhex = octnum;
 // changing octal to binary
     cout<<"The corrosponding binary number is: ";
        for(int j=0;octnum>0;j++){
             oct_digit = octnum % 10;

            for(int i=0;i<3;i++){
            rem = oct_digit % 2;
            oct_digit/=2;
            binary[j][i]=rem;
            }
            count++;
            octnum/=10;
            if(octnum==0){
                for(int j=count-1;j>=0;j--){
                   for (int i = 2; i >=0 ; i-- ) {
                     cout << binary[j][i] ;
                    }
                }
            }
        }
        cout<<endl;
     cout << ".....................................\n";
      // changing octal to decimal
    while ( octdec != 0) {
         digit = octdec % 10;
         ocsum = ocsum + (digit * pow(8, pwr));
         pwr ++;
         octdec /= 10;
        }
         cout<<"The corrosponding decimal number is: ";
         cout << ocsum<<endl;
     cout << ".....................................\n";
     //changing octal to hexa decimal
        pwr=0,ocsum=0;
        while ( octhex != 0) {
         digit = octhex % 10;
         if(digit>7){
            ch++;
            break;
         }
         ocsum = ocsum + (digit * pow(8, pwr));
         pwr ++;   
         octhex /= 10;    
        }
if(ch==0){
        int nhex=ocsum;
    int hexrem,hexcount=0,hexa[32];
     for(int i=0; nhex != 0;i++){
        hexrem = nhex%16;
        nhex/=16;
        hexa[i]=hexrem;
        hexcount++;
    }
     cout << "The corresponding Hexadecimal number is: ";

    for(int i=hexcount-1;i>=0;i--){
     switch(hexa[i]){
       case 10:cout<<"A";
         break;
       case 11:cout<<"B";
         break;
       case 12:cout<<"C";
         break;
       case 13:cout<<"D";
         break;
       case 14:cout<<"E";
         break;
       case 15:cout<<"F";
         break;
      default:
         cout<<hexa[i];
     } 
     }
}
    else
        cout<<"\nInvalid Octal Digit "<<digit<<endl;
     cout << "\n.....................................\n\n";
    return 0;
}
