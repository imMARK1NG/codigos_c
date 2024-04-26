#include<stdio.h>
int main(){
char nome[100], endereco[100], bairro[100], comp[100], ref[100], cidade[100], cep[100];
printf("INFORME SEU NOME: ");
	gets(nome, 100, stdin);
printf("INFORME SEU ENDERECO: ");
	gets(endereco, 100, stdin);
printf("INFORME SEU BAIRRO: ");
	gets(bairro, 100, stdin);
printf("INFORME SEU COMP: ");
	gets(comp, 100, stdin);
printf("INFORME SEU REF: ");
	gets(ref, 100, stdin);
printf("INFORME SEU CIDADE: ");
	gets(cidade, 100, stdin);
printf("INFORME SEU CEP: ");
	gets(cep, 100, stdin);	
	
printf("------------------------------------------------------------------------------------------");
	
printf("---------------------------------------------\n");
printf("                    iFood              \n");
printf("+-------------------------------------------+\n");
printf("|           PEDIDO: #4162                   |\n");
printf("|  LOCALIZADOR DO PEDIDO: 8648 4226         |\n");
printf("|          ENTREGA PROPRIA                  |\n");
printf("|                                           |\n");
printf("|  CODIGO DE COLETA PARCEIRA: 7259          |\n");
printf("+-------------------------------------------+\n");	

printf("Restaurante: Samurai Cozinha Oriental\n");
printf("Data: 06/04/2024 - 18:53:55\n");
printf("Entrega prevista: 20:22\n");
printf("\n");
printf("6 pedidos na sua loja\n");
printf("\n");
printf("Dados do cliente:\n");
printf("Nome: %s\n", nome);
printf("Telefone: 0800 705 6525 ID: 84665813\n");
printf("Endereco: %s\n", endereco);
printf("Bairro: %s\n", bairro);
printf("Comp: %s\n", comp);
printf("Ref: %s\n", ref);
printf("Cidade: %s - MA\n", cidade);
printf("CEP: %s\n", cep);
printf("\n");
printf("Qtd Item:\n");

printf("1x Camarao Crispy (acompanha arroz yakimeshi)\n 1 Banana frita");	
printf("obs: nao enviar descartaveis para este pedido\n");
printf("n");
printf("+-------------------------------------------+\n");	
printf("|Taxa de entrega:                   R$ 11,99|\n");
printf("|Valor total do pedido:             R$ 55,19|\n");
printf("|Pagamento via iFood:              -R$ 67,18|\n");
printf("+-------------------------------------------+\n");	
printf("|Cobrar do cliente:                 R$ 0,00 |\n");
printf("+-------------------------------------------+\n");
printf("Forma de pagamento\n");
printf("\n");
printf("Pedido pago online, nao cobrar do cliente - PIX - PIX");










}
