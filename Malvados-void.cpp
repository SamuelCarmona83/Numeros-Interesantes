#include <stdio.h>
#include <stdlib.h>



void leer(int &x){
    do{
    printf("\n    Por favor ingrese un numero entero positivo: \n   ");
    scanf("%i",&x);
    }while(x<0);
}

void binario(int x,int &i){
   while(x>0){
    if(x%2!=0){
        i++;
    }
    x/=2;
   }  
}

void paroinpar(int aux){
    if(aux%2==0 && aux>0){
        printf("\n  -El numero es malvado.\n ");
    }else{
        printf("\n  -El numero no es malvado.\n  ");
    }

}


main(){
    char des='S';
    do{
        int num=0,aux=0;
        leer(num);
        binario(num,aux);
        paroinpar(aux);
        printf("\n    Desea ingresar un nuevo numero? Si=S y No=N \n    ");
        scanf(" %c",&des);
        
    }while(des=='S');

system("pause");
}
