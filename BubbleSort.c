#include <stdio.h>

void main(){

    int v[9] = {3,15,24,35,46,1,56,20,31};
    int i, j, o, aux;
    o=0;

        printf("O vetor desordenado e: \n");

        for(i=0;i<9;i++){
            printf("%i ", v[i]);
        }   
        
        for(o=0;o<9;o++){
            for(j=o+1;j<9;j++){
                if(v[o]>v[j]){
                    aux = v[o]; 
                    v[o] = v[j]; 
                    v[j] = aux;
                }
            }
        }

        printf("\nVetor ordenado: \n");
         for(i=0;i<9;i++){
            printf("%i ", v[i]);
        } 
}