#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
#include <conio.h>
#include <time.h>

int main (void)
{
  	int op;
	int tempo;
	char rep;
  	int i = 0, j = 0, acertos = 0;
	int numeros[30];
	int respostas[30];
	system("color F0");
do{
	
  	
  setlocale(LC_ALL, "Portuguese");
   	printf("---------------------------------------------------------------------------------------------------------------------\n");
  	printf("|                                        JOGO DA MEMORIA by MATHEUS REBOUCAS                                        |\n");
  	printf("---------------------------------------------------------------------------------------------------------------------\n");
  	printf ("|-------------|   1 - EASY    | 2 - MEDIUM     |    3- HARD      | 4 - INSANE   | 5 - M.... F....  |---------------|\n");
  	printf ("|-------------|   5 NUMEROS   |   10 NUMEROS   |   15 - NUMEROS  | 20 - NUMEROS |   30 - NUMEROS   |---------------|\n");
	printf ("|-------------|  5 - SEGUNDOS |  5 - SEGUNDOS  |  10 - SEGUNDOS  | 10 - SEGUNDOS|   10 - SEGUNDOS  |---------------|\n");
	  printf("\nDIGITE O NIVEL QUE VOCE QUER JOGAR:");
	scanf("%d", &op);
		fflush(stdin);
  switch(op)
  {
  	
	case  1 : //easy   			terminado
		srand(time(NULL));
    	
		for (i=0;i<5;i++){
        		numeros[i] = (rand() % 100)+1;
    	}
    	
        system ("cls");
        
        for(tempo=5;tempo>=0;tempo--){
			printf ("DECORE OS NUMEROS:\n\n\t");				
			for (i=0;i<5;i++){
					printf ("%d |", numeros[i]);	
			}
			printf("\n\n %d SEGUNDOS\n",tempo);
			Sleep(1000);
			system("cls");
		}	
    	system ("cls");
    	
		printf ("INFORME OS NUMEROS QUE FORAM EXIBIDOS:\n\n");
    	
		for (i=0;i<4;i++){
        	scanf ("%d |", &respostas[i]);
        	if (respostas[i]==numeros[i]){
           		acertos++;
        	}
    	}
		
		if (acertos>=4){
        	printf ("\n\nPARABENS VOCE ACERTOU TUDO. VEJA OS NUMEROS EXIBIDOS\n\n\t");
        	for (i=0;i<5;i++){
            	printf ("%d |", numeros[i]);
        	}
    	}
    	else if (acertos==3){
        	printf ("\n\nVOCE ERROU ALGUNS NUMEROS. MELHORE SUS MEMORIA, VEJA OS NUMEROS EXIBIDOS\n\n\t");
        	for (i=0;i<5;i++){
            	printf ("%d |", numeros[i]);
        	}
    	}
		else{printf ("\n\nQUE PENA SUA MEMORIA ESTA MUITO RUIM VEJA OS NUMEROS QUE FORAM EXIBIDOS:\n\n\t");
        for (i=0;i<5;i++){
            printf ("%d |", numeros[i]);
        }
    }	
    	fflush(stdin);
		break;
    
	case 2 :   	//medium       	terminado
		srand(time(NULL));
    	
		for (i=0;i<10;i++){
        		numeros[i] = (rand() % 100)+1;
    	}
    	
        system ("cls");
        
        for(tempo=5;tempo>=0;tempo--){
			printf ("DECORE OS NUMEROS:\n\n\t");				
			for (i=0;i<10;i++){
					printf ("%d |", numeros[i]);	
			}
			printf("\n\n %d SEGUNDOS\n",tempo);
			Sleep(1000);
			system("cls");
		}	
    	system ("cls");
    	
		printf ("INFORME OS NUMEROS QUE FORAM EXIBIDOS:\n\n");
    	
		for (i=0;i<9;i++){
        	scanf ("%d |", &respostas[i]);
        	if (respostas[i]==numeros[i]){
           		acertos++;
        	}
    	}
		
		if (acertos==9){
        	printf ("\n\nPARABENS VOCE ACERTOU TUDO. VEJA OS NUMEROS EXIBIDOS\n\n\t");
        	for (i=0;i<9;i++){
            	printf ("%d |", numeros[i]);
        	}
    	}
    	else if (acertos==4){
        	printf ("\n\nVOCE ERROU ALGUNS NUMEROS. MELHORE SUS MEMORIA, VEJA OS NUMEROS EXIBIDOS\n\n\t");
        	for (i=0;i<9;i++){
            	printf ("%d |", numeros[i]);
        	}
    	}
    	
		else{printf ("\n\nQUE PENA SUA MEMORIA ESTA MUITO RUIM VEJA OS NUMEROS QUE FORAM EXIBIDOS:\n\n\t");
        for (i=0;i<9;i++){
            printf ("%d |", numeros[i]);
        }
    }	
    	fflush(stdin);
		break;
    
	case 3 : //hard					terminado
    	srand(time(NULL));
    	
		for (i=0;i<15;i++){
        		numeros[i] = (rand() % 100)+1;
    	}
    	
        system ("cls");
        
        for(tempo=10;tempo>=0;tempo--){
			printf ("DECORE OS NUMEROS:\n\n\t");				
			for (i=0;i<15;i++){
					printf ("%d |",numeros[i]);
			}
			printf("\n\n %d SEGUNDOS\n",tempo);
			Sleep(1000);
			system("cls");
		}	
    	system ("cls");
    	
		printf ("INFORME OS NUMEROS QUE FORAM EXIBIDOS:\n\n");
    	
		for (i=0;i<14;i++){
        	scanf ("%d |", &respostas[i]);
        	if (respostas[i]==numeros[i]){
           		acertos++;
        	}
    	}
		
		if (acertos==14){
        	printf ("\n\nPARABENS VOCE ACERTOU TUDO. VEJA OS NUMEROS EXIBIDOS\n\n\t");
        	for (i=0;i<14;i++){
            	printf ("%d |", numeros[i]);
        	}
    	}
    	else if (acertos==6){
        	printf ("\n\nVOCE ERROU ALGUNS NUMEROS. MELHORE SUS MEMORIA, VEJA OS NUMEROS EXIBIDOS\n\n\t");
        	for (i=0;i<14;i++){
            	printf ("%d |", numeros[i]);
        	}
    	}
    	
		else{printf ("\n\nQUE PENA SUA MEMORIA ESTA MUITO RUIM VEJA OS NUMEROS QUE FORAM EXIBIDOS:\n\n\t");
        for (i=0;i<14;i++){
            printf ("%d |", numeros[i]);
        }
    }	
    fflush(stdin);
   	break;
    
	case 4 :	//insane 			terminado
    	 srand(time(NULL));
    	
		for (i=0;i<20;i++){
        		numeros[i] = (rand() % 100)+1;
    	}
    	
        system ("cls");
        
        for(tempo=10;tempo>=0;tempo--){
			printf ("DECORE OS NUMEROS:\n\n\t");				
			for (i=0;i<20;i++){
					printf ("%d |", numeros[i]);	
			}
			printf("\n\n %d SEGUNDOS\n",tempo);
			Sleep(1000);
			system("cls");
		}	
    	system ("cls");
    	
		printf ("INFORME OS NUMEROS QUE FORAM EXIBIDOS:\n\n");
    	
		for (i=0;i<19;i++){
        	scanf ("%d |", &respostas[i]);
        	if (respostas[i]==numeros[i]){
           		acertos++;
        	}
    	}
		
		if (acertos==19){
        	printf ("\n\nPARABENS VOCE ACERTOU TUDO. VEJA OS NUMEROS EXIBIDOS\n\n\t");
        	for (i=0;i<19;i++){
            	printf ("%d |", numeros[i]);
        	}
    	}
		else if (acertos==9){
        	printf ("\n\nVOCE ERROU ALGUNS NUMEROS. MELHORE SUS MEMORIA, VEJA OS NUMEROS EXIBIDOS\n\n\t");
        	for (i=0;i<19;i++){
            	printf ("%d |", numeros[i]);
        	}
    	}
    	
		else{printf ("\n\nQUE PENA SUA MEMORIA ESTA MUITO RUIM VEJA OS NUMEROS QUE FORAM EXIBIDOS:\n\n\t");
        for (i=0;i<19;i++){
            printf ("%d |", numeros[i]);
        }
    }
	fflush(stdin);	
    break;
    
	case 5 :		//m..... f....					terminado
    	srand(time(NULL));
    	
		for (i=0;i<30;i++){
        		numeros[i] = (rand() % 100)+1;
    	}
    	
        system ("cls");
        
        for(tempo=10;tempo>=0;tempo--){
			printf ("DECORE OS NUMEROS:\n\n\t");				
			for (i=0;i<30;i++){
					printf ("%d |", numeros[i]);	
			}
			printf("\n\n %d SEGUNDOS\n",tempo);
			Sleep(1000);
			system("cls");
		}	
    	system ("cls");
    	
		printf ("INFORME OS NUMEROS QUE FORAM EXIBIDOS:\n\n");
    	
		for (i=0;i<29;i++){
        	scanf ("%d |", &respostas[i]);
        	if (respostas[i]==numeros[i]){
           		acertos++;
        	}
    	}
		
		if (acertos==29){
        	printf ("\n\nPARABENS VOCE ACERTOU TUDO. VEJA OS NUMEROS EXIBIDOS\n\n\t");
        	for (i=0;i<29;i++){
            	printf ("%d |", numeros[i]);
        	}
    	}
		else if (acertos==14){
        	printf ("\n\nVOCE ERROU ALGUNS NUMEROS. MELHORE SUS MEMORIA, VEJA OS NUMEROS EXIBIDOS\n\n\t");
        	for (i=0;i<29;i++){
            	printf ("%d |", numeros[i]);
        	}
    	}
    	
		else{printf ("\n\nQUE PENA SUA MEMORIA ESTA MUITO RUIM VEJA OS NUMEROS QUE FORAM EXIBIDOS:\n\n\t");
        for (i=0;i<29;i++){
            printf ("%d |", numeros[i]);
        }
	    }	
		break;	
	  	fflush(stdin);
	}
	  	
		printf("\n\nDESEJA REPETIR O JOGO?");
		printf("\nPRESSIONE A TECLA 'S'; \nPARA SAIR PRESSIONE QUALQUER TECLA!\n");
	  	scanf("%c",&rep);
	  	system("cls");

}while(rep == 'S');
  
  return 0;
}
