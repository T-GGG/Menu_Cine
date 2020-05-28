#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int opcion,op;
	


	printf("menu\n");
	printf("1-peliculas\n");
	printf("2-horarios\n");
	printf("3-reservaciones\n");
	printf("4-dulceria\n");
	printf("5-locaciones\n");
	printf("6-peliculas online");
	printf("selecciona una opcion ");
	scanf("%d", &opcion);
	
	
	switch(opcion){
		
		case 1:printf("has seleccionado peliculas\n");
			   printf("este es el listado de peliculas\n");
			   printf("1-Los caballeros\n");
			   printf("2-Gretel y Hanse\n");
			   printf("3-Gretel y Hansel\n");
			   printf("4-El llamado salvaje\n");
			   
        break;
        
		case 2:printf("has seleccionado horarios\n");
			   printf("este es el listado de los horarios para peliculas\n");
			   printf("1-Los caballeros - lunes 12:00pm\n");
			   printf("2-Gretel y Hanse - martes 1:30pm\n");
			   printf("3-Gretel y Hansel- miercoles 2:50pm\n");
			   printf("4-El llamado salvaje- jueves 3:00pm\n");
		break;
	    
	    case 3:printf("has seleccionado reservaciones\n");
			   printf("has tus reservaciones en los horarios de la pelicula que deses\n");
			   printf("1-Los caballeros - lunes 12:00pm\n");
			   printf("2-Gretel y Hanse - martes 1:30pm\n");
			   printf("3-Gretel y Hansel- miercoles 2:50pm\n");
			   printf("4-El llamado salvaje- jueves 3:00pm\n");
			   printf("selecciona una opcion");
		break;
			   
		case 4:printf("has seleccionado dlceria\n");
			   printf("este es el listado de los dulces\n");
			   printf("1-palomitas\n");
			   printf("2-gomiitas\n");
			   printf("3-refresco\n");
			   printf("4-papas\n");
		break;
			   
		case 5:printf("has seleccionado locaciones\n");
			   printf("este es el listado de las locaciones\n");
			   printf("1-cine sanjuanico\n");
			   printf("2-cine lindavista\n");
			   printf("3-cine buenavista\n");
		break;
		
		case 6:printf("has seleccionado peliculas online\n");
			   printf("este es el listado de peliculasonline\n");
			   printf("1-Los caballeros\n");
			   printf("2-Gretel y Hanse\n");
			   printf("3-Gretel y Hansel\n");
			   printf("4-El llamado salvaje\n");
		break;
		
	}
}
