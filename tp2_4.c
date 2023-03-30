#include <stdio.h>
#include <stdlib.h>



struct compu {

    int velocidad;//entre 1 y 3 GHz

    int anio;//entre 2015 y 2023

    int cantidad;//entre 1 y 8

    char *tipo_cpu; //valores del arreglo tipos

};


void mostrar (struct compu lista[], int num);




int main (){

    char tipos[6][10]={"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};

    struct compu stock[5]; 
    
    int i;
    
    for(i=0 ; i<5 ; i++){
    	
    	int valor;
    	
    	stock[i].tipo_cpu = &tipos[6][10];
    	
    	printf("\nIngresar la velocidad de la computadora %d : ",i+1);
    	
    	scanf("%d",&stock[i].velocidad);
    	
    	printf("\nIngresar el anio (entre 2015 y 2023) de la computadora %d : ",i+1);
    	
    	scanf("%d",&stock[i].anio);
    	
    	printf("\nIngresar la cantidad de nucleos de la computadora %d : ",i+1);
    	
    	scanf("%d",&stock[i].cantidad);
    	
    	fflush(stdin);
    	
    	printf("\nIngresar el tipo de cpu de la computadora %d : \n0-Inter \n1-AMD \n2-Celeron \n3-Athlon \n4-Core \n5-Pentium",i+1);
    	
    	scanf("%d",&valor);
    	
    	stock[i].tipo_cpu = &tipos[valor];
    	
	}
	
	
	mostrar(stock[], 5);
	
	
	
	
    return 0;
    
}


void mostrar (struct compu lista[], int num){
	
	int i;
	
	for(i=0 ; i<num ; i++){
		
		printf("\nVelocidad computadora %d : %d",i,lista[i].velocidad);
		
		printf("\nAnio de la computadora %d : %d",i,lista[i].anio);
		
		printf("\nCantidad de nucleos de la computadora %d : %d",i,lista[i].cantidad);
			
		printf("\nTipo de cpu de la computadora %d : %s ",i,lista[i].tipo_cpu);
		
	}
		
}



