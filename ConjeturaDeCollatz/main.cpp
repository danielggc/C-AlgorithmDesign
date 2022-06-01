 
 #include <stdio.h>

 int conjeturaCollatz( int );
 bool isnumDivisibleDos(int );
 
 int main (){
    int listNum[5]  = {1,2,3,4,5};
    for(int i = 0; i < 5 ; i++){
        int retult = conjeturaCollatz(listNum[i]);
        printf("dato %d: %d \n ",i,retult);
    }
 }

 int conjeturaCollatz( int num ){
    int result ;
    if(isnumDivisibleDos(num) == true) {
        result = num / 2;
    }  
    else {
        result =( ( num * 3 ) +1 );
    }    
    return result;

 }

 bool isnumDivisibleDos(int num ){
     if( num % 2 == 0  ) return true ;
     else return false;
 }