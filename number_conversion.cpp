#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

int main () {
  int option; 
  cout << "\n\tNUMER CONVERSION\n"; 
  cout << ".....................................\n";
  cout << "Choose a number format\n\n"; 
  lable:
  cout << "\tOPTIONS\n"; 
  cout << "1. Decimal number\n"; 
  cout << "2. Binary number\n";
  cout << "3. Octal number\n";  
  cout << "4. Hexadecimal number\n";
  cout << ".....................................\n";
  cin >> option; 
  system ("CLS"); 
  if (option == 1 ) {
//CONVERSION From DECIMAL
 int num,dec_count=0,nbinary, reminder, dec_binary[32]; 
    cout << "Enter a Decimal number\n"; 
    cin >> num; 
    cout << "\tConversion Table\t\n";
    cout << "DECIMAL\t\tBINARY\t\tOCTAL\t\tHEXADECIMAL\n";
    cout << num << "\t\t"; 
// changing decimal to binary
    nbinary = num; 
       for (int i = 0; nbinary != 0; i++) {
           reminder = nbinary % 2;  
           nbinary = nbinary / 2;
           dec_binary[i] = reminder; 
           dec_count++;
          }
       for (int i = dec_count - 1; i >=0 ; i-- ) {
        cout << dec_binary[i];  
          } 
         cout << "\t\t";
// changing decimal to octal
int octcount = 0, noctal, octrem, octal[32]; 
noctal = num;
       for (int i = 0; noctal!= 0; i++) {
           octrem = noctal % 8;  
           noctal = noctal/ 8;
           *(octal + i) = octrem; 
           octcount++;
          }
       for (int i = octcount - 1; i >=0 ; i-- ) {
           cout << *(octal + i); 
          } 
           cout <<"\t\t"; 
 //changing decimal to hexadecimal
int hexrem,hexcount=0,hexa[32],nhex=num;
       for(int i=0; nhex != 0;i++){
           hexrem = nhex%16;
           nhex/=16;
           *(hexa + i)=hexrem;
           hexcount++;
          }
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
           cout<<*(hexa + i);
          } 
        }
}
//CONVERSION From BINARY
  else if (option == 2) {
//binary to decimal
    int bisum = 0, binum, digit, power = 0; 
    cout << "Enter the Binary number\n"; 
    cin >> binum; 
    cout << "\t Conversion Table \t\n";
    cout << "BINARY\t\tDECIMAL\t\tOCTAL\t\tHEXADECIMAL\n";
    cout << binum << "\t\t"; 
    int biocnum = binum,bihexnum=binum, biocsum; 
    while ( binum != 0) {
         digit = binum % 10;
         binum /= 10;  
         bisum = bisum + (digit * pow (2, power));
         power ++;  
        }
         cout << bisum <<"\t\t"; 
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
          *(ocbinum + j) = biocsum; 
           ocount++; 
    }
     for (int i = ocount - 1; i >=0 ; i-- ) {
        cout << *(ocbinum + i);
    } 
    cout << "\t\t"; 
    // Binary to hexadecimal
    int bihexsum=0,hcount=0,hex[32], counthex=0;
    for(int i=0;bihexnum!=0;i++){
           while(hcount<4 && bihexnum!=0){
                 digit =bihexnum%10;
                 bihexsum = bihexsum + pow(2,hcount)*digit;
                 hcount++;
                 bihexnum/=10;
                }
      *(hex + i)=bihexsum;
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
}
else if (option == 3) {
                          //CONVERSION From OCTAL 
 int octnum,count=0,rem,oct_digit, binary[16][16],ocsum = 0, pwr=0,ch=0;
    cout<<"Enter the octal number\n"; 
    cin >> octnum; 
    cout << "\tConversion Table\t\n";
    cout << "OCTAL\t\tBINARY\t\tDECIMAL\t\tHEXADECIMAL\n";
    cout << octnum << "\t\t"; 
    int octdec = octnum;
    int octhex = octnum; 
 // changing octal to binary
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
        cout<<"\t\t"; 
// changing octal to decimal
    while ( octdec != 0) {
            oct_digit = octdec % 10;
            ocsum = ocsum + (oct_digit * pow(8, pwr));
            pwr ++;   
            octdec /= 10;    
        }
        cout << ocsum<<"\t\t"; 
//changing octal to hexa decimal
   pwr=0,ocsum=0;
        while ( octhex != 0) {
             oct_digit = octhex % 10;
                 if(oct_digit>7){
                    ch++;
                    break;
                  }
    ocsum = ocsum + (oct_digit * pow(8, pwr));
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
        cout<<"\nInvalid Octal Digit "<<oct_digit<<endl;
  
}
  else if (option == 4) {
                             // CONVERSION FROM HEXA DECIMAL
// Hexa_decimal to Decimal
  char h_num [10]; 
  int hexa_dec_sum = 0, length, hexa_digit; 
  cout << "Enter the hexadecimal number. Use capital letter for the letters\n"; 
  cin >> h_num; 
  cout << "\t Conversion Table \t\n";
  cout << "HEXADECIMAL\t\tDECIMAL\t\tBINARY\t\t\tOCTAL\n";
  cout << h_num << "\t\t\t"; 
  length = strlen(h_num);
            for (int i = 0; h_num [i] != '\0'; i++) {
                    length --; 
                  if (h_num[i] >= '0' && h_num [i] <= '9') 
                    hexa_digit = h_num [i] - 48;  
                  else if (h_num[i] >= 'A' && h_num [i] <= 'F')     
                    hexa_digit = h_num [i] - 55;  
                    hexa_dec_sum += hexa_digit * pow (16, length);
  }
cout << hexa_dec_sum<< "\t\t"; 
// Hexa decimal to binary 
int hex_bi_count = 0, hex_bi_reminder, hexa_binary [32]; 
int hex_bi = hexa_dec_sum;
            for (int i = 0; hex_bi != 0; i++) {
                 hex_bi_reminder = hex_bi  % 2;  
                 hex_bi = hex_bi / 2;
                 hexa_binary[i] = hex_bi_reminder; 
                 hex_bi_count++;
                }
            for (int i = hex_bi_count - 1; i >=0 ; i-- ) {
                 cout << hexa_binary[i];
            }
                cout << "\t\t"; 
// Hexa decimal to octal 
 int hex_oct_count = 0, hex_octal, hex_oct_rem, hexa_octal[32]; 
 hex_octal =  hexa_dec_sum; 
     for (int i = 0; hex_octal!= 0; i++) {
             hex_oct_rem = hex_octal % 8;  
             hex_octal = hex_octal/ 8;
             hexa_octal[i] = hex_oct_rem; 
             hex_oct_count++;
            }
// cout << "The corrosponding Octal number is: ";
     for (int i = hex_oct_count - 1; i >=0 ; i-- ) {
             cout << hexa_octal[i]; 
    } 
//cout << "\n.....................................\n"; 
}
else {
     cout << "Invalid input\n" << "Choose from the options\n"; 
     goto lable;
}
    return 0;
}
