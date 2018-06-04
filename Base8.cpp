#include <stdlib.h>
#include <stdio.h>


main(){
    int aux2=0;
    scanf("%i",&aux2);
                int rem, i=1, octal=0;
    while (aux2!=0)
    {
        rem=aux2%2;
        aux2/=2;
        octal+=rem*i;
        i*=10;
    }
                
                 printf("La posicion del numero en base octal es: %d \n",octal);
                
    


system("pause");
}
