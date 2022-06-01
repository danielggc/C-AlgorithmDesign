#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void insertionSort(int size);
void swapChar(char &x, char &y);
void swapInt(int &x, int &y);

int main(){
    printf("lista ordenada:\n");
    insertionSort(7);  
}

void insertionSort(int size){
    int list[10] = {1,2,7,9,11,2,5,7};
    
    for(int i = 0 ;i < size; i ++){
        int j = i;
        while (list[j] > list[j+1] && (j > 0 ) ){
            swapInt(list[j],list[j+1]);
            j--;
        }
    }
 
    for(int i = 0; i < 5 ; i++){
        printf("dato %d: %d \n ",i,list[i]);
    }

}




void swapChar(char &x, char &y){
    char  conts = x;
    x = y;
    y = conts;
}

void swapInt(int &x, int &y){
    int  conts = x;
    x = y;
    y = conts;
}
