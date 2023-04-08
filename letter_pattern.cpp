#include <iostream> 
using namespace std; 

int main () {
    char alpha= 'A';
for(int i='A'; i<='O';i++){
 if(i<='H'){
    for(char j=alpha; j<='H'- (i-65);j++){
     cout<<j;
     } 

    for(int j=0; j<((2*(i-65))-1);j++){
        cout<<" ";
    }
    for(char k=('H'-(i-65));k>='A';k--){
        if(k=='H'){
        continue;}
     cout<<k;
    }                    

        cout<<endl; 
       }

 else{
    for(char j='A'; j<=(i-7);j++){
     cout<<j;
     } 

    for(int j=0; j<=(2*(79-i)-2);j++){
        cout<<" ";
    }
    for(char k=(i-7);k>='A';k--){
        if(k=='H'){
            continue;
        }
     cout<<k;
    }
     cout<<endl; 
}  
}





    return 0; 
}