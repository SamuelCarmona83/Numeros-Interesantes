#include <stdlib.h>
#include <stdio.h>

int tam=0;
int mat[4][4]={0};

int fibo(int x){
return (x<2)? 1: fibo(x-1)+fibo(x-2) ;
}

void imprimir(int vec[],int tam){
	
	for(int i=0;i<tam;i++){
          printf("[%i]",vec[i]);
          }
}


int pregunta(bool &menu){
     int x;
     
   printf ("\n\n------------------- Menu -------------------------------\n\n");
   printf (" 1) Ordenar el vector de mayor a menor\n");
   printf (" 2) Ordenar de menor a mayor las posiciones pares del vector\n");
   printf (" 3) Voltear el vector. \n");
   printf (" 4) Llenar una matriz 4*4 con los contenidos del vector. \n");
   printf (" 5) Ordenar la matriz anterior de menor a mayor, de derecha a izquierda\n y de arriba a abajo (solo si se realiza la 4 con anterioridad)\n");
   printf (" 6) Salir del programa. \n");
     printf("\n Seleccione un opcion :) \n");
     printf ("\n\n----------------------------------------------------------\n");
     
     do{
          scanf("%i",&x);
          printf("\n");
     }while(x<0 || x>6);
     
     if(x==6)
     menu=false;
     else
     return x;
}


void ordenarv(int array[],int tam,int men){
     if(men<tam){
          int p=men;
          int aux;
          
          for(int i=men;i<tam;i++){
                    if(array[i]>=array[tam]){
                    if(array[i]!=array[p]){
                    aux=array[p];
                    array[p]=array[i];
                    array[i]=aux;
                    }
                    p++;
                    }
          }                    
          aux=array[p];
          array[p]=array[tam];
          array[tam]=aux;
          ordenarv(array, p-1, men);
          ordenarv(array, tam, p+1);
     }
     
}


void ordenarv2(){
    		
		    int men[2]; // Vector de dos posiciones que guarda la posición con el menor dato.
    		int aux;    // Variable auxiliar usada para realizar intercambios.
    		int aux2;   // Variable auxiliar usada para el segundo recorrido de la matriz.
    
	for(int i=0; i< 4; i++){
        for(int j=3; j>=0; j--){
                men[0]=i;
                men[1]=j;
                aux2=j;
                for(int f=i; f<4; f++){
                           for(int c=aux2; c>=0; c--){ 
                                   if(mat[f][c]<mat[men[0]][men[1]]){
                                           men[0]=f;
                                           men[1]=c;
                                   } 
                           }
                           aux2=3;
                }
                aux=mat[i][j];
                mat[i][j]=mat[men[0]][men[1]];
                mat[men[0]][men[1]]=aux;
        }
    } 
     
     for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			printf(" [%d]",mat[i][j]);
		}
	printf("\n");	
	}
	
	printf("\n");
	
     
}



void  selectivop(int vec[], int tam){
    int men;
    int aux;
    for(int i=0; i< tam; i+=2){
        
        if((i)%2==0){
		men=i;
		for(int j=i+2; j<tam; j=j+2){
        	
        		
				
               if(vec[j]<vec[men]){
                              men=j;
               } 
           
               
        
        aux=vec[i];
        vec[i]=vec[men];
        vec[men]=aux;
    	}
    
}
}
//imprimir(vec,tam);
}

void helice(int arr[], int tam){

    int aux;
    for(int i=0; i<=tam/2; i++){
        aux=arr[i];
        arr[i]=arr[tam-1-i];
        arr[tam-1-i]=aux;
    }
    //imprimir(arr,tam);
}

void llenado(int vec[], int tam){
	int cont=0;
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			if(cont<tam){
				mat[i][j]=vec[cont];
				
			}else{
				mat[i][j]=0;
			}
			
			cont++;
		}
		
	}
	
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			printf(" [%d]",mat[i][j]);
		}
	printf("\n");	
	}
	
	printf("\n");
	
	
}






main(){
		// no se redactar.
		printf("\n Ingrese un numero entero positivo para llenar un vector\n con las posciones de la serie fibonacci. \n");	
     scanf("%i",&tam);
     printf("\n");
     
     int vec[tam];
     bool menu=true;
     int resp=0;

     
     	for(int i=0;i<tam;i++){
          vec[i]=fibo(i);
    	 }
     	imprimir(vec,tam);
     
          
          do{
          
          resp=pregunta(menu);
          
          if(resp==1){
          	ordenarv(vec,tam-1,0);
          	//imprimir(vec,tam);
		  }else if(resp==2)
          	selectivop(vec,tam);
          else if(resp==3)
          	helice(vec,tam);
          else if(resp==4)
          	llenado(vec,tam);
		  else if(resp==5)
          	ordenarv2();
        	else if(resp==6)
        	menu=false;
          
          for(int i=0;i<tam;i++){
          printf("[%i]",vec[i]);
          }
          

          }while(menu!=false);




system("pause");
}
