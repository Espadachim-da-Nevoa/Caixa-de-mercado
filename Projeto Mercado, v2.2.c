#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define np 9 //numero de produtos
#define cara 10 // numero de caracter que cada produto pode ter no max
int main() {
	// versão: 2.2
    int tentativa, senha = 1234, t_usuario;
    int n;
    char p[np][cara], pro = 's', nome[cara];
    float v[np], pr = 0;
    char exit;
    int i = 0, j;
    char bla = 's';
    char c = 'd';
    char nada[np] = {"-------\n"};
    for(int i = 0; i <np; i++){
    	v[i] = 0;
	}
    for(int i = 0; i <=np - 1; i++){
    		strcpy(p[i],nada);
	}
    do{
   		exit = 'a';
   		pro = 'a';
   		pr = 0;
		do{
   			printf("Digite 1 para acessar como usuario. \nDigite 2 para acessar como ADM. \n");
   			printf("Digite 3 para ver os produtos disponiveis. \nDigite 4 para sair.\n");
   			scanf("%i", &t_usuario);
   			fflush(stdin);
   			system("cls");
   		}while(t_usuario !=1 && t_usuario !=2 && t_usuario !=3 && t_usuario !=4);
  		switch(t_usuario){
        	case 1:
        		while(exit != 'x'){
        			printf("digite o nome do produto:");
        			fgets(nome, cara, stdin);
        			fflush(stdin);
        			printf("digite quantas unidades do produto \nvai levar: \n");
        			scanf("%i", &n);
        			fflush(stdin);
        			for(j = 0; strcmp(nome, p[j]) != 0 && j < np; j++){
					}
					pr += n * v[j];
        			printf("digite x para parar de adicionar produtos: \n");
        			scanf("%c", &exit);
        			fflush(stdin);
        			system("cls");
    	   	 	}
    	    	printf("valor total dos produtos: %f\n", pr);
      	 	break;
      	  	case 2:
          		for(int i = 1; tentativa != senha && i <= 3; i++){
           	    	printf("Digite a senha: \n");
          	    	printf("voce tem 3 tentativas essa e a numero:%i: \n", i);
          	    	scanf("%i", &tentativa);
           	    	fflush(stdin);
           	    	system("cls");
           		}
				if(tentativa == senha){
					int a = 0;
					do{
						printf("Digite 1 para editar algum slot em especifico.\nDigite 2 para editar os slots em sequencia.\n");
						scanf("%i", &a);
						fflush(stdin);
						system("cls");
					}while(a != 1 && a != 2);
					switch(a){
						case 1:
							do{
								c = 'd';
								int b = 0;
								do{
									printf("digite qual slot quer editar do numero 1 ao %i: \n", np);
            						scanf("%i", &b);
            						fflush(stdin);
            						system("cls");
            					}while(b <1 || b > np);
            					printf("Determine o nome do produto(slot %i):\n", b);
            					fgets(p[b-1], cara, stdin);
            					fflush(stdin);
            					printf("Digite quanto esse produto deve custar:\n");
            					scanf("%f", &v[b -1]);
            					fflush(stdin);
            					printf("Quer editar algum outro slot? se sim digite \'s\', caso contrario tecle qualquer coisa:");
            					scanf("%c", &c);
            					fflush(stdin);
            					system("cls");
            				}while(c == 's');
            			break;
            			case 2:
							for( i; pro != 'x' && i <cara; i++){
            					printf("Determine o nome do produto(slot %i):\n", i + 1);
            					fgets(p[i], 10, stdin);
            					fflush(stdin);
            					printf("Digite quanto esse produto deve custar:\n");
            					scanf("%f", &v[i]);
            					fflush(stdin);
            					printf("Digite 'x' para parar de adicionar produtos: \n");
            					scanf("%c", &pro);
        	    				fflush(stdin);
        	    				system("cls");
      	      				}
      	      			break;	
      	      		}
     	    	}
     		break;
     		case 3:
     			for(int i = 0; i < np ; i++){
     				printf("\nProduto do slot %i: %s valor: %i", i + 1, p[i], v[i]);
					 if(i == np - 1){
					 	printf("\n\n");
					 }	
				}	
     		break;
			case 4:
				bla = 'x';
			break;
   		}
   	}while(bla != 'x');
   	printf("Fim do programa.");
    return 0;
}