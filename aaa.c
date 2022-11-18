#include <stdio.h>

int main(){

int i,n,aux,min,j;
printf("Numero del vector: ");
scanf("%d", &n);

int arraylist[n];

    for(i=0; i<n; i++){
        printf("Posicion guardar:%d", i);
        scanf("%d", &arraylist[i]);
    }

    for(i=0; i<n-1; i++){
        min=i;
        printf("/n");
        for (j= i+1; j<n; j++){
            if(arraylist[j] < arraylist[min]){
                min = j;
            }
        }
        printf("/n");
        if(min != i){
            aux        = arraylist[min];
            arraylist[min]     = arraylist[i];
            arraylist[i]   = aux;
        }
    }
printf("\t");	
	for(i=0; i<n; i++){
		printf("%d\t",arraylist[i]);
	}


}
