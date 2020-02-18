#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include<time.h>

int main(){
	long  numeroPalabras=26*26*26*1000;
	numeroPalabras=(numeroPalabras*3)+(numeroPalabras-1);
	srand ( time ( NULL ));
	int control=0;
	char *cadena;
	cadena=(char *) malloc (numeroPalabras*sizeof(char));
	
	for (int j = 0; j <numeroPalabras ; j++)
	{

		if (control<3){
			cadena[j]='A' +(rand()%('Z'-'A'));
			//cadena[j]='L';
			control++;
		}
		else{
			cadena[j]=' ';
			control=0;
		}
	}
	
	int contador=0;
	for (int j = 0; j <numeroPalabras-2 ; j++)
	{
		if((cadena[j]=='I') && (cadena[j+1]=='P') && (cadena[j+2]=='N')){
			printf("\n%d-%c%c%c",j,cadena[j],cadena[j+1],cadena[j+2] );
			contador++;
		}
	}
	free(cadena);
	printf("\nTotal de repeticiones = %d",contador );
	return 0;
}
