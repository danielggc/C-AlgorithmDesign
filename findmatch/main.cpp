#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//compile con  = gcc main.cpp -o main | y ejecute con ./main
int findmatch(char *pListA , char *pListB);

int main(){
    char  nombre1[] = "daniel"; 
    char* pNombre1  = &nombre1[0];
    char  texto[]   = "asdsaadanieldasd"; 
    char* ptexto    = &texto[0];
    int result      = findmatch(pNombre1,ptexto);
    if(result >= 0){
        printf("la posicion del coinsidecia es %d=)\n",result);
    }else{
        printf("no se encontro coninsidecia alguna\n");
    }
}



int findmatch(char *pListA , char *pListB){
    /*
    printf(":: %c",*pListA);
    pListA = pListA +1;
    printf(":: %c",*pListA);
    printf("\n");
    printf("%d",contA);
    */
    int j        = 0;
    int contA    = strlen( pListA ) ;
    int contText = strlen( pListB );

    for( int i = 0 ; i  < (contText-contA);i++){

        while ( ( j < contA ) && ( pListA[j] == pListB[j+i] ) ){
            j++;
            if(j == contA) return i;
        }
        
    }
    return -1;

}
