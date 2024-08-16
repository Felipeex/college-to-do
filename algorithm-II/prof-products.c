#include <stdio.h>
#include <stdlib.h>
#include "conio.h"
#include <ctype.h>
#include <string.h>

#define TFP 10
#define TFC 30
#define TFV 50

int main(void)
{
	char op, Produto[TFP][30], Cliente[TFC][30], AuxProd[30];
	int i, pos, TLV=0, TLC=0, TLP=0, MatVendas[TFV][3], Estoque[TFP];
	float Preco[TFP];
	
	
	do
	{
		system("cls");     //clrscr();
		printf("\n### M E N U  VENDAS ###\n");
		printf("[A] Cadastrar Produtos\n");
		printf("[B] Exibir Produtos\n");
		printf("[C] Consultar Produtos\n");
		printf("[D] Excluir Produtos\n");
		printf("[E] Alterar Estoque de Produtos\n");
		printf("[F] Ordenar Produtos pela Qtde em Estoque (Decrescente)\n");
		printf("[G] Cadastrar Clientes\n");
		printf("[H] Exibir Clientes\n");
		printf("[I] Ordenar Clientes (Crescente)\n");
		printf("[J] Realizar Vendas\n");
		printf("[K] Exibir Vendas\n");
		printf("[ESC] Finalizar\n");
		printf("\n\nOpcao desejada: ");
		
		op = toupper(getch()); //getche();
		switch(op)
		{
			case 'A':  system("cls");
					   printf("\nCadastrar Produtos:\n");
					   if (TLP==TFP)
					   {
					   	  printf("\nVetor de Produtos Cheio!\n");
					   	  getch();
					   }
					   else
					   		{
					   		   printf("Descricao do Produto [%d]: ",TLP);
							   fflush(stdin);
							   gets(AuxProd);
							   //while (TLP<TFP && AuxProd[0]!='\0')
							   //while (TLP<TFP && strlen(AuxProd)>0)
							   //while (TLP<TFP && strcmp(AuxProd,"")!=0)
							   while (TLP<TFP && strcmp(AuxProd,"\0")!=0)
							   {
								  //Busca para validar a exist�ncia do Produto
								  pos=0;
								  while (pos<TLP && stricmp(AuxProd,Produto[pos])!=0)
								  			pos++;
								  
								  if(pos==TLP) //N�o achou...
								  {
									  strcpy(Produto[TLP],AuxProd);
									  printf("Preco [%d]: ",TLP);
									  scanf("%f",&Preco[TLP]);
									  printf("Qtde Estoque [%d]: ",TLP);
									  scanf("%d",&Estoque[TLP]);
									  TLP++;
								  }
								  else
								  	{
								  		printf("\nProduto ja Cadastrado!\n");
								  		getch();
								  	}
								  
								  
								  if (TLP<TFP)
								  {
								  	printf("\nDescricao do Produto [%d]: ",TLP);
							        fflush(stdin);
							        gets(AuxProd);
								  }
								  else
								  	  {
								  	  	printf("\nVetor de Produtos Cheio!\n");
								  	  	getch();
								  	  }
							   }
					   		}
					   
					   break;
					   
			case 'B':  printf("\nRelatorio de Produtos:\n");
					   if (TLP==0)
					      printf("\nNao ha Produtos!\n");
					   else
				   		  for(i=0; i<TLP; i++)
				   		  {
				   		  	printf("\nProduto[%d]:\n",i);
							printf("Descricao: %s\n",Produto[i]);
				   		  	printf("Preco: R$ %.2f\n",Preco[i]);
				   		  	printf("Estoque: %d\n",Estoque[i]);
				   		  }
					   
					   getch();
					   break;
					   
			case 'G':  printf("\nCadastrar Clientes:\n");
					   getch();
					   break;
					   
			case 'H':  printf("\nRelatorio de Clientes:\n");
					   getch();
					   break;
					   
			case 'J':  printf("\nRealizar Vendas:\n");
					   getch();
					   break;
			
			case 'K':  printf("\nExibir Vendas:\n");
					   getch();
					   break;
		}
		
	}while (op != 27);  //ESC
	
	return 0;
}
