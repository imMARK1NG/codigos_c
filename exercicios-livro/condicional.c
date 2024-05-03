#include<stdio.h>
int main(){
int a,b, resto, div1, div2;

printf("Informe o primeiro numero:");
scanf("%d", &a);

printf("Informe o segundo numero:");
scanf("%d", &b);

printf("\n");

resto = a % b;
div1 = (a/b);
div2 = (b/a);

printf("\n");

printf("%d\n" ,resto);

printf("%d\n", div1);

printf("%d\n", div2);

if( a % b == 0){

    printf("numero par");

}

else{

    printf("numero impar");
}

printf("\n");

return 0;
}