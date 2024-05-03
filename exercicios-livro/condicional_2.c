#include<stdio.h>
int main(){

    int id1, id2, resto;

    printf("Informe a idade da primeira pessoa:");
    scanf("%d", &id1);
    printf("Informe a idade da segunda pessoa:");
    scanf("%d", &id2);

if(id1 % 2 == 0){
    
    printf("Desconto");
}

else{

    printf("Sem Desconto");
}
}