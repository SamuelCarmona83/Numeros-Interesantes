#include <stdlib.h>
#include <stdio.h>


main(){
    int aux2=0;
    scanf("%i",&aux2);
    
    
                
    int rem, i=1, bin=0;
    while (aux2!=0)
    {
        rem=aux2%2;
        aux2/=2;
        bin+=rem*i;
        i*=10;
    }
                
                 printf("El numero en binario es : %d \n",bin);
                
    


system("pause");
}
