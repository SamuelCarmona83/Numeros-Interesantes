#include <stdio.h>
#include <stdlib.h>

int sumad(int n){
int s=0;

for(int i=1;i<=n/2;i++){
    if(n%i==0)
    s=s+i;
}
return s;
}




int  semi(int n){ 
int s=0; 
int es=0; 

s=sumad(n);

    if (n<=1){
        return 0;
    }
    if(s==sumad(s)){
        return 1;
    }
    else{
        return 0;
    }
}




main(){
int n;
bool es;
scanf("%i",&n);
es=semi(n);
    if (es==1)
        printf(" Es ambicioso \n");
    else
        printf(" No es ambicioso \n");
system("pause");
}
