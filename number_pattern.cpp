#include <iostream>
using namespace std;

int main () {

int n;
    cout<<"ENTER a positive integer: ";
    cin>>n;
    int y=n, x;

  for(int i=n; i>=0;i-- ){
        for( x=0; x<i; x++){
          cout<<x<<" ";
        }
         if (i<=n-1)
         cout<<x<<" ";
        for(int x=n; x>i; x=x-1 ){
            cout<<"  ";
        }
        for(int j=n-1; j>i; j-- ){
          cout<<"  ";
        }
        for(int k=0; k<=i; k++){
         cout<<y<<" ";
         y--;
        }
      y=i-1;
      cout<<endl;
    }
//the second half structure
   int a=n+1;
   for(int i=n; i>0;i--){
        y=n-i;
        for(int l=a; l>=i; l--){
         cout<<a-l<<" ";
         }

     for(int j=0; j<i-1; j++){
      cout<<"  ";
     }
     for(int o=0; o<i-2; o++){
        cout<<"  ";
     }
     if(i!=1)
     cout<<y+1<<" ";
     for(int k=n; k>=i; k--){
     cout<<y<<" ";
     y--;
     }
     cout<<endl;
    }
    return 0;

}
