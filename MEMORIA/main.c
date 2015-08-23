#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "header.h"
#define LIN 4
#define COL 6




int main()
{
char dica[1] ={'F'};
int verificador = 0;
float porcentagemp1 = 0, porcentagemp2 = 0;
int modo = 0, scorep1 = 0, scorep2 = 0, vez = 1, vezb = 1, posusadas = 0, desistir = 0, playerdes, ndicasp1 = 3, ndicasp2 = 3, dicalin = 0, dicacol = 0;
int linhausada[24] = {9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9};
int colunausada[24]= {9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9};
FILE *arq;
arq = fopen("hist.txt", "a+"); //Mostra o nome do arquivo a ser aberto e os parametros
fprintf(arq,"\n|||||||||||||||||||||||COMEÇO DO JOGO||||||||||||||||||||||||\n");//Imprime no arquivo
fclose(arq);                                                                      //Fecha o arquivo
printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");

sleep(1);
system("clear");

printf("|||||||||||||||||||||||||||||||||                                                        |\n");
printf("|||||||||||||||||||||||||||||                                                            |\n");
printf("||||||||||||||||||||||||||||                                                             |\n");
printf("||||||||||||||||||||||||||||                                                             |\n");
printf("|||||||||||||||||||||||||||||                                                            |\n");
printf("|||||||||||||||||||||||||||||||||                                                        |\n");


sleep(1);
system("clear");

printf("|||||||||||||||||||||||                                                                  |\n");
printf("|||||||||||||||||||                                                                      |\n");
printf("||||||||||||||||||                                                                       |\n");
printf("||||||||||||||||||                                                                       |\n");
printf("|||||||||||||||||||                                                                      |\n");
printf("|||||||||||||||||||||||                                                                  |\n");

sleep(1);
system("clear");

printf("||||||||||||||||||                                                                       |\n");
printf("||||||||||||||                                                                           |\n");
printf("|||||||||||||                                                                            |\n");
printf("|||||||||||||                                                                            |\n");
printf("||||||||||||||                                                                           |\n");
printf("||||||||||||||||||                                                                       |\n");

sleep(1);
system("clear");

printf("%c[%d;%dm                  ",0x1b,47,30);printf("%c[%d;%dm                                                                       \n\a",0x1b,41,30);
printf("%c[%d;%dm              ",0x1b,47,30);printf("%c[%d;%dm                                                                           \n\a",0x1b,41,30);
printf("%c[%d;%dm             ",0x1b,47,30);printf("%c[%d;%dm                                                                            \n\a",0x1b,41,30);
printf("%c[%d;%dm             ",0x1b,47,30);printf("%c[%d;%dm                                                                            \n\a",0x1b,41,30);
printf("%c[%d;%dm              ",0x1b,47,30);printf("%c[%d;%dm                                                                           \n\a",0x1b,41,30);
printf("%c[%d;%dm                  ",0x1b,47,30);printf("%c[%d;%dm                                                                       \n\a",0x1b,41,30);
printf("%c[%d;%dm                  HUELANDIA\n", 0x1b, 37, 40);
printf("                       PRESENTS\n");

sleep(2);
system("clear");

printf("%c[%dm||||          ||||| |||||||| ||||          ||||| |||||||||||| ||||||||    |||| ||||||||||||\n",0x1b, 5);
printf("||||||       |||||| ||||     ||||||       |||||| ||||    |||| ||||  ||||       ||||    ||||\n");
printf("|||| ||     || |||| |||||||| |||| ||     || |||| ||||    |||| ||||||||    |||| ||||||||||||\n");
printf("||||   ||  ||  |||| ||||     ||||   ||  ||  |||| ||||    |||| ||||  ||||  |||| ||||    ||||\n");
printf("||||    ||||   |||| |||||||| ||||    ||||   |||| |||||||||||| ||||   |||| |||| ||||    ||||\n");
printf("%c[%dm", 0x1b,0);
printf("___________________________________________________________________________________________\n");

    printf( "ENTRE O MODO DE JOGO:\n" );
    printf(" 1| 1 PLAYER - ||EM BREVE||\n");
    printf(" 2| 2 PLAYERS\n");
    scanf("%d", &modo);
    while(modo != 2){printf("A versão Beta só conta com a opção para 2 Players\n"); scanf("%d", &modo);}
printf("___________________________________________________________________________________________\n");
printf("VOCÊ SELECIONOU O MODO PARA %d PLAYERS\n", modo);
sleep(1);
system("clear");
printf("||||          ||||| |||||||| ||||          ||||| |||||||||||| ||||||||    |||| ||||||||||||\n");
printf("||||||       |||||| ||||     ||||||       |||||| ||||    |||| ||||  ||||       ||||    ||||\n");
printf("|||| ||     || |||| |||||||| |||| ||     || |||| ||||    |||| ||||||||    |||| ||||||||||||\n");
printf("||||   ||  ||  |||| ||||     ||||   ||  ||  |||| ||||    |||| ||||  ||||  |||| ||||    ||||\n");
printf("||||    ||||   |||| |||||||| ||||    ||||   |||| |||||||||||| ||||   |||| |||| ||||    ||||\n");
printf("___________________________________________________________________________________________\n");
char vet[] = {0,0,1,1,2,2,3,3,4,4,5,5,6,6,7,7,8,8,9,9,10,10,11,11};
int  i;
printf("%c[%dmEMBARALHANDO...\n", 0x1b, 5);
printf("%c[%dm", 0x1b,0);
struct timespec tim, tim2;
tim.tv_sec  = 0;
tim.tv_nsec = 500000000L;

for (i = 0; i < 23; i++)
	{
	    nanosleep(&tim , &tim2);
	    srand(time(NULL));
		int r = rand() % 24;
		int temp = vet[i];
		vet[i] = vet[r];
		vet[r] = temp;

	}



char vetc[24];      // transforma o vetor numerico em caracteres
int contador = 0;
while(contador<24){
switch(vet[contador]){
case 0: vetc[contador] = 'A';break;  //ex. qnd o vetor em determinada posição valer 0 ira receber A
case 1: vetc[contador] = 'B';break;
case 2: vetc[contador] = 'C';break;
case 3: vetc[contador] = 'D';break;
case 4: vetc[contador] = 'E';break;
case 5: vetc[contador] = 'F';break;
case 6: vetc[contador] = 'G';break;
case 7: vetc[contador] = 'H';break;
case 8: vetc[contador] = 'I';break;
case 9: vetc[contador] = 'J';break;
case 10: vetc[contador] = 'K';break;
case 11: vetc[contador] = 'L';break;
}
contador++;
}
char matriz[LIN][COL];//transforma o vetor em matriz
int li,co,vetcont = 0;
for (li = 0; li < LIN; li++ )
{
for (co = 0; co < COL; co++ )
{
 matriz[li][co] = vetc[vetcont];
 vetcont++;
}

}
system("clear");
printf("||||          ||||| |||||||| ||||          ||||| |||||||||||| ||||||||    |||| ||||||||||||\n");
printf("||||||       |||||| ||||     ||||||       |||||| ||||    |||| ||||  ||||       ||||    ||||\n");
printf("|||| ||     || |||| |||||||| |||| ||     || |||| ||||    |||| ||||||||    |||| ||||||||||||\n");
printf("||||   ||  ||  |||| ||||     ||||   ||  ||  |||| ||||    |||| ||||  ||||  |||| ||||    ||||\n");
printf("||||    ||||   |||| |||||||| ||||    ||||   |||| |||||||||||| ||||   |||| |||| ||||    ||||\n");
printf("___________________________________________________________________________________________\n\n");

for (li = 0; li < LIN; li++ )
{
for (co = 0; co < COL; co++ )
{
printf("           [%c]",matriz[li][co]);
}

printf("\n\n");
}

char matrizesc[LIN][COL]; //gera a matriz "escondida"
for (li = 0; li < LIN; li++ )
{
for (co = 0; co < COL; co++ )
{
 matrizesc[li][co] = '#';
}
}

vez = 1;
sleep(5);
int scoretotal; //cria o tamanho maximo da partida
while(scoretotal != 12){
system("clear");
printf("||||          ||||| |||||||| ||||          ||||| |||||||||||| ||||||||    |||| ||||||||||||\n");
printf("||||||       |||||| ||||     ||||||       |||||| ||||    |||| ||||  ||||       ||||    ||||\n");
printf("|||| ||     || |||| |||||||| |||| ||     || |||| ||||    |||| ||||||||    |||| ||||||||||||\n");
printf("||||   ||  ||  |||| ||||     ||||   ||  ||  |||| ||||    |||| ||||  ||||  |||| ||||    ||||\n");
printf("||||    ||||   |||| |||||||| ||||    ||||   |||| |||||||||||| ||||   |||| |||| ||||    ||||\n");
printf("___________________________________________________________________________________________\n\n");
int t = 0;
for (li = 0; li < LIN; li++ )
{
    t = 0;
for (co = 0; co < COL; co++ )
{
    t = 0;
   for (verificador = 0; verificador < 25; verificador++){
    if(li == linhausada[verificador] && co == colunausada[verificador]){
        printf("           [%c]",matriz[li][co]);
        t = 1;
    }
}
if(t != 1){printf("           [%c]",matrizesc[li][co]);}
}

printf("\n\n");
}

int linhajogada1 = 0, colunajogada1 = 0, linhajogada2 = 0, colunajogada2 = 0;//variaveis para o posicionamento das cartas escolhidas

printf("SCORE PLAYER 1: %d\n", scorep1);
printf("SCORE PLAYER 2: %d\n", scorep2);

printf("___________________________________________________________________________________________\n");
printf("TURNO DO PLAYER %d                                              PRESSIONE -1 PARA DESISTIR\n", vez);
printf("___________________________________________________________________________________________\n");
printf("Entre a jogada:\n");
printf("Linha:");scanf("%d", &linhajogada1);
if(linhajogada1 == -1){printf("Se você deseja desistir digite -1 de novo\n"); scanf("%d", &desistir); if(desistir == -1){arq = fopen("hist.txt", "a+");fprintf(arq,"PLAYER %d DESISTIU\n", vez);fclose(arq);scoretotal = 12; playerdes = vez; return -1;}printf("Linha:");scanf("%d", &linhajogada1);}
printf("Coluna:");scanf("%d", &colunajogada1);
if(colunajogada1 == -1){printf("Se você deseja desistir digite -1 de novo\n"); scanf("%d", &desistir); if(desistir == -1){arq = fopen("hist.txt", "a+");fprintf(arq,"PLAYER %d DESISTIU\n", vez);fclose(arq);scoretotal = 12; playerdes = vez; return -1;}printf("Coluna:");scanf("%d", &colunajogada1);}
verificador = 0;
while(verificador < 25){
  while((linhajogada1 == linhausada[verificador] && colunajogada1 == colunausada[verificador])|(linhajogada1 > 3) | (colunajogada1 > 5)) {
    printf("Entre a jogada:\n");
    printf("Linha:");scanf("%d", &linhajogada1);
    if(linhajogada1 == -1){printf("Se você deseja desistir digite -1 de novo\n"); scanf("%d", &desistir); if(desistir == -1){arq = fopen("hist.txt", "a+");fprintf(arq,"PLAYER %d DESISTIU\n", vez);fclose(arq);scoretotal = 12; playerdes = vez; return -1;}printf("Linha:");scanf("%d", &linhajogada1);}
    printf("Coluna:");scanf("%d", &colunajogada1);
    if(colunajogada1 == -1){printf("Se você deseja desistir digite -1 de novo\n"); scanf("%d", &desistir); if(desistir == -1){arq = fopen("hist.txt", "a+");fprintf(arq,"PLAYER %d DESISTIU\n", vez);fclose(arq);scoretotal = 12; playerdes = vez; return -1;}printf("Coluna:");scanf("%d", &colunajogada1);}
  }
  verificador++;
}





system("clear"); //ANIMAÇÃO DA CARTA VIRANDO
printf("||||          ||||| |||||||| ||||          ||||| |||||||||||| ||||||||    |||| ||||||||||||\n");
printf("||||||       |||||| ||||     ||||||       |||||| ||||    |||| ||||  ||||       ||||    ||||\n");
printf("|||| ||     || |||| |||||||| |||| ||     || |||| ||||    |||| ||||||||    |||| ||||||||||||\n");
printf("||||   ||  ||  |||| ||||     ||||   ||  ||  |||| ||||    |||| ||||  ||||  |||| ||||    ||||\n");
printf("||||    ||||   |||| |||||||| ||||    ||||   |||| |||||||||||| ||||   |||| |||| ||||    ||||\n");
printf("___________________________________________________________________________________________\n\n");
for (li = 0; li < LIN; li++ )
{
    t = 0;
for (co = 0; co < COL; co++ )
{
    t = 0;
   for (verificador = 0; verificador < 25; verificador++){
    if(li == linhausada[verificador] && co == colunausada[verificador]){
        printf("           [%c]",matriz[li][co]);
        t = 1;
    }
}
if(li == linhajogada1 && co == colunajogada1 && t != 1){
printf("           %c",'|');t = 1;}
if(t != 1){printf("           [%c]",matrizesc[li][co]);}
}
printf("\n\n");
}

nanosleep(&tim, &tim2);
system("clear"); //PRIMEIRA JOGADA
printf("||||          ||||| |||||||| ||||          ||||| |||||||||||| ||||||||    |||| ||||||||||||\n");
printf("||||||       |||||| ||||     ||||||       |||||| ||||    |||| ||||  ||||       ||||    ||||\n");
printf("|||| ||     || |||| |||||||| |||| ||     || |||| ||||    |||| ||||||||    |||| ||||||||||||\n");
printf("||||   ||  ||  |||| ||||     ||||   ||  ||  |||| ||||    |||| ||||  ||||  |||| ||||    ||||\n");
printf("||||    ||||   |||| |||||||| ||||    ||||   |||| |||||||||||| ||||   |||| |||| ||||    ||||\n");
printf("___________________________________________________________________________________________\n\n");
for (li = 0; li < LIN; li++ )
{
    t = 0;
for (co = 0; co < COL; co++ )
{
    t = 0;
   for (verificador = 0; verificador < 25; verificador++){
    if(li == linhausada[verificador] && co == colunausada[verificador]){
        printf("           [%c]",matriz[li][co]);
        t = 1;
    }
}
if(li == linhajogada1 && co == colunajogada1 && t != 1){
printf("           [%c]",matriz[linhajogada1][colunajogada1]);t = 1;}
else if(t != 1){printf("           [%c]",matrizesc[li][co]);}
}
printf("\n\n");
}


printf("SCORE PLAYER 1: %d\n", scorep1);
printf("SCORE PLAYER 2: %d\n", scorep2);
printf("___________________________________________________________________________________________\n");
printf("TURNO DO PLAYER %d                                       DIGITE 777 PARA DICA DE VIZINHANÇA\n", vez);
printf("                                                         DIGITE 601 PARA DICA DE COLUNA\n");
printf("                                                         DIGITE 714 PARA DICA DE LINHA\n");
if(vez == 1){printf("Nº DE DICAS DISPONIVEIS: %d\n", ndicasp1);}
if(vez == 2){printf("Nº DE DICAS DISPONIVEIS: %d\n", ndicasp2);}
printf("___________________________________________________________________________________________\n");
printf("Entre a jogada:\n");


dicaviz(&linhajogada1, &colunajogada1,dica, matriz);
dicacoluna(&linhajogada1, &colunajogada1,&dicacol, matriz);
dicalinha(&linhajogada1, &colunajogada1,&dicalin, matriz);


printf("Linha:");scanf("%d", &linhajogada2);if(linhajogada2 == 777){
if(vez == 1 && ndicasp1 > 0){ndicasp1 = ndicasp1 - 1;
     if(dica[1] == 'F'){printf("DICA:FRIO\n");}
else if(dica[1] == 'M'){printf("DICA:MORNO\n");}
else if(dica[1] == 'Q'){printf("DICA:QUENTE\n");}}
if(vez == 2 && ndicasp2 > 0){ndicasp2 = ndicasp2 - 1;
     if(dica[1] == 'F'){printf("DICA:FRIO\n");}
else if(dica[1] == 'M'){printf("DICA:MORNO\n");}
else if(dica[1] == 'Q'){printf("DICA:QUENTE\n");}}
}
if(linhajogada2 == 601){
if(vez == 1 && ndicasp1 > 0){ndicasp1 = ndicasp1 - 1;
printf("COLUNA:%d\n", dicacol);
}
if(vez == 2 && ndicasp2 > 0){ndicasp2 = ndicasp2 - 1;
printf("COLUNA:%d\n", dicacol);
}
}
if(linhajogada2 == 714){
if(vez == 1 && ndicasp1 > 0){ndicasp1 = ndicasp1 - 1;
printf("LINHA:%d\n", dicalin);
}
if(vez == 2 && ndicasp2 > 0){ndicasp2 = ndicasp2 - 1;
printf("LINHA:%d\n", dicalin);
}
}
if(linhajogada2 == -1){printf("Se você deseja desistir digite -1 de novo\n"); scanf("%d", &desistir); if(desistir == -1){arq = fopen("hist.txt", "a+");fprintf(arq,"PLAYER %d DESISTIU\n", vez);fclose(arq);scoretotal = 12; playerdes = vez; return -1;}printf("Linha:");scanf("%d", &linhajogada2);}




printf("Coluna:");scanf("%d", &colunajogada2);if(colunajogada2 == 777){
if(vez == 1 && ndicasp1 > 0){ndicasp1 = ndicasp1 - 1;
     if(dica[1] == 'F'){printf("DICA:FRIO\n");}
else if(dica[1] == 'M'){printf("DICA:MORNO\n");}
else if(dica[1] == 'Q'){printf("DICA:QUENTE\n");}}
if(vez == 2 && ndicasp2 > 0){ndicasp2 = ndicasp2 - 1;
     if(dica[1] == 'F'){printf("DICA:FRIO\n");}
else if(dica[1] == 'M'){printf("DICA:MORNO\n");}
else if(dica[1] == 'Q'){printf("DICA:QUENTE\n");}}
}
if(colunajogada2 == 601){
if(vez == 1 && ndicasp1 > 0){ndicasp1 = ndicasp1 - 1;
printf("COLUNA:%d\n", dicacol);
}
if(vez == 2 && ndicasp2 > 0){ndicasp2 = ndicasp2 - 1;
printf("COLUNA:%d\n", dicacol);
}
}
if(colunajogada2 == 714){
if(vez == 1 && ndicasp1 > 0){ndicasp1 = ndicasp1 - 1;
printf("LINHA:%d\n", dicalin);
}
if(vez == 2 && ndicasp2 > 0){ndicasp2 = ndicasp2 - 1;
printf("LINHA:%d\n", dicalin);
}
}
if(colunajogada2 == -1){printf("Se você deseja desistir digite -1 de novo\n"); scanf("%d", &desistir); if(desistir == -1){arq = fopen("hist.txt", "a+");fprintf(arq,"PLAYER %d DESISTIU\n", vez);fclose(arq);scoretotal = 12; playerdes = vez; return -1;}printf("Coluna:");scanf("%d", &colunajogada2);}








verificador = 0;
while(verificador < 25){
  while((linhajogada2 == linhausada[verificador] && colunajogada2 == colunausada[verificador]) | (linhajogada1 == linhajogada2 && colunajogada1 == colunajogada2)|(linhajogada2 > 3) | (colunajogada2 > 5)) {
    printf("Entre a jogada:\n");
    printf("Linha:");scanf("%d", &linhajogada2);
    if(linhajogada2 == 777){
if(vez == 1 && ndicasp1 > 0){ndicasp1 = ndicasp1 - 1;
     if(dica[1] == 'F'){printf("DICA:FRIO\n");}
else if(dica[1] == 'M'){printf("DICA:MORNO\n");}
else if(dica[1] == 'Q'){printf("DICA:QUENTE\n");}}
if(vez == 2 && ndicasp2 > 0){ndicasp2 = ndicasp2 - 1;
     if(dica[1] == 'F'){printf("DICA:FRIO\n");}
else if(dica[1] == 'M'){printf("DICA:MORNO\n");}
else if(dica[1] == 'Q'){printf("DICA:QUENTE\n");}}
}
if(linhajogada2 == 601){
if(vez == 1 && ndicasp1 > 0){ndicasp1 = ndicasp1 - 1;
printf("COLUNA:%d\n", dicacol);
}
if(vez == 2 && ndicasp2 > 0){ndicasp2 = ndicasp2 - 1;
printf("COLUNA:%d\n", dicacol);
}
}
if(linhajogada2 == 714){
if(vez == 1 && ndicasp1 > 0){ndicasp1 = ndicasp1 - 1;
printf("LINHA:%d\n", dicalin);
}
if(vez == 2 && ndicasp2 > 0){ndicasp2 = ndicasp2 - 1;
printf("LINHA:%d\n", dicalin);
}
}
    if(linhajogada2 == -1){printf("Se você deseja desistir digite -1 de novo\n"); scanf("%d", &desistir); if(desistir == -1){arq = fopen("hist.txt", "a+");fprintf(arq,"PLAYER %d DESISTIU\n", vez);fclose(arq);scoretotal = 12; playerdes = vez; return -1;}printf("Linha:");scanf("%d", &linhajogada2); }




    printf("Coluna:");scanf("%d", &colunajogada2);
    if(colunajogada2 == 777){
if(vez == 1 && ndicasp1 > 0){ndicasp1 = ndicasp1 - 1;
     if(dica[1] == 'F'){printf("DICA:FRIO\n");}
else if(dica[1] == 'M'){printf("DICA:MORNO\n");}
else if(dica[1] == 'Q'){printf("DICA:QUENTE\n");}}
if(vez == 2 && ndicasp2 > 0){ndicasp2 = ndicasp2 - 1;
     if(dica[1] == 'F'){printf("DICA:FRIO\n");}
else if(dica[1] == 'M'){printf("DICA:MORNO\n");}
else if(dica[1] == 'Q'){printf("DICA:QUENTE\n");}}
}
if(colunajogada2 == 601){
if(vez == 1 && ndicasp1 > 0){ndicasp1 = ndicasp1 - 1;
printf("COLUNA:%d\n", dicacol);
}
if(vez == 2 && ndicasp2 > 0){ndicasp2 = ndicasp2 - 1;
printf("COLUNA:%d\n", dicacol);
}
}
if(colunajogada2 == 714){
if(vez == 1 && ndicasp1 > 0){ndicasp1 = ndicasp1 - 1;
printf("LINHA:%d\n", dicalin);
}
if(vez == 2 && ndicasp2 > 0){ndicasp2 = ndicasp2 - 1;
printf("LINHA:%d\n", dicalin);
}
}
    if(colunajogada2 == -1){printf("Se você deseja desistir digite -1 de novo\n"); scanf("%d", &desistir); if(desistir == -1){arq = fopen("hist.txt", "a+");fprintf(arq,"PLAYER %d DESISTIU\n", vez);fclose(arq);scoretotal = 12; playerdes = vez; return -1;}printf("Coluna:");scanf("%d", &colunajogada2);}
  }
  verificador++;
}
system("clear"); //ANIMAÇÃO DA CARTA VIRANDO
printf("||||          ||||| |||||||| ||||          ||||| |||||||||||| ||||||||    |||| ||||||||||||\n");
printf("||||||       |||||| ||||     ||||||       |||||| ||||    |||| ||||  ||||       ||||    ||||\n");
printf("|||| ||     || |||| |||||||| |||| ||     || |||| ||||    |||| ||||||||    |||| ||||||||||||\n");
printf("||||   ||  ||  |||| ||||     ||||   ||  ||  |||| ||||    |||| ||||  ||||  |||| ||||    ||||\n");
printf("||||    ||||   |||| |||||||| ||||    ||||   |||| |||||||||||| ||||   |||| |||| ||||    ||||\n");
printf("___________________________________________________________________________________________\n\n");
for (li = 0; li < LIN; li++ )
{
    t = 0;
for (co = 0; co < COL; co++ )
{
    t = 0;
   for (verificador = 0; verificador < 25; verificador++){
    if(li == linhausada[verificador] && co == colunausada[verificador]){
        printf("           [%c]",matriz[li][co]);
        t = 1;
    }
}
if(li == linhajogada1 && co == colunajogada1 && t != 1){
printf("           %c",'|');t = 1;}
if(li == linhajogada2 && co == colunajogada2 && t != 1){
printf("           %c",'|');t = 1;}
else if(t != 1){printf("           [%c]",matrizesc[li][co]);}
}
printf("\n\n");
}


nanosleep(&tim, &tim2);
system("clear"); //SEGUNDA JOGADA
printf("||||          ||||| |||||||| ||||          ||||| |||||||||||| ||||||||    |||| ||||||||||||\n");
printf("||||||       |||||| ||||     ||||||       |||||| ||||    |||| ||||  ||||       ||||    ||||\n");
printf("|||| ||     || |||| |||||||| |||| ||     || |||| ||||    |||| ||||||||    |||| ||||||||||||\n");
printf("||||   ||  ||  |||| ||||     ||||   ||  ||  |||| ||||    |||| ||||  ||||  |||| ||||    ||||\n");
printf("||||    ||||   |||| |||||||| ||||    ||||   |||| |||||||||||| ||||   |||| |||| ||||    ||||\n");
printf("___________________________________________________________________________________________\n\n");
for (li = 0; li < LIN; li++ )
{
for (co = 0; co < COL; co++ )
{
      t = 0;
   for (verificador = 0; verificador < 25; verificador++){
    if(li == linhausada[verificador] && co == colunausada[verificador]){
        printf("           [%c]",matriz[li][co]);
        t = 1;
    }
}
if(li == linhajogada1 && co == colunajogada1 && t != 1){
printf("           [%c]",matriz[linhajogada1][colunajogada1]);t = 1;}
else if(li == linhajogada2 && co == colunajogada2 && t != 1){
printf("           [%c]", matriz[linhajogada2][colunajogada2]); t = 1;}
else if(t != 1){printf("           [%c]",matrizesc[li][co]); t = 0;}
}
printf("\n\n");
}



 FILE *arq;
arq = fopen("hist.txt", "a+");
if(arq == NULL)
{
    printf("ERROR: MISSING HIST.TXT FILE\n");
}
if(vez == 1){
fprintf(arq, "PLAYER 1:\n%d,%d\n%d,%d\n_____________________\n",linhajogada1, colunajogada1, linhajogada2, colunajogada2);}
if(vez == 2){
fprintf(arq,"PLAYER 2:%d,%d\n%d,%d\n",linhajogada1, colunajogada1, linhajogada2, colunajogada2);}


fclose(arq);





if((matriz[linhajogada1][colunajogada1] == matriz[linhajogada2][colunajogada2]) && vez == 1){printf("ACERTOU\a\n"); //se player 1 acertou
linhausada[posusadas] = linhajogada1;
colunausada[posusadas] = colunajogada1;
posusadas++;
linhausada[posusadas] = linhajogada2;
colunausada[posusadas] = colunajogada2;
posusadas++;
scorep1++;
vezb = 1;
}




if((matriz[linhajogada1][colunajogada1] == matriz[linhajogada2][colunajogada2]) && vez == 2){printf("ACERTOU\a\n"); //se player 2 acertou
linhausada[posusadas] = linhajogada1;
colunausada[posusadas] = colunajogada1;
posusadas++;
linhausada[posusadas] = linhajogada2;
colunausada[posusadas] = colunajogada2;
posusadas++;
scorep2++;
vezb = 2;
}






if((matriz[linhajogada1][colunajogada1] != matriz[linhajogada2][colunajogada2]) && vez == 1){printf("PLAYER 1 ERROU\a\n"); vezb = 2;}
if((matriz[linhajogada1][colunajogada1] != matriz[linhajogada2][colunajogada2]) && vez == 2){printf("PLAYER 2 ERROU\a\n"); vezb = 1;}
vez = vezb;
scoretotal = scorep1 + scorep2;
sleep(3);

}



porcentagemp1 = ((float)scorep1/12);
porcentagemp2 = ((float)scorep2/12);
system("clear"); //FIM DE JOGO
printf("||||          ||||| |||||||| ||||          ||||| |||||||||||| ||||||||    |||| ||||||||||||\n");
printf("||||||       |||||| ||||     ||||||       |||||| ||||    |||| ||||  ||||       ||||    ||||\n");
printf("|||| ||     || |||| |||||||| |||| ||     || |||| ||||    |||| ||||||||    |||| ||||||||||||\n");
printf("||||   ||  ||  |||| ||||     ||||   ||  ||  |||| ||||    |||| ||||  ||||  |||| ||||    ||||\n");
printf("||||    ||||   |||| |||||||| ||||    ||||   |||| |||||||||||| ||||   |||| |||| ||||    ||||\n");
printf("___________________________________________________________________________________________\n\n");
for (li = 0; li < LIN; li++ )//IMPRIME A MATRIZ DESCOBERTA
{
for (co = 0; co < COL; co++ )
{
printf("           [%c]",matriz[li][co]);
}

printf("\n\n");
}





printf("___________________________________________________________________________________________\n");
if(scorep1 > scorep2){                                       //P1 Venceu de P2
printf("O PLAYER 1 VENCEU õ/\n");
printf("___________________________________________________________________________________________\n");
printf("PORCENTAGEM DE ACERTO DE P1: %.2f\n", porcentagemp1);//PORCENTAGEM P1
printf("PORCENTAGEM DE ACERTO DE P2: %.2f\n", porcentagemp2);//PORCENTAGEM P2
printf("___________________________________________________________________________________________\n");
printf("SCORE P1: %d\n", scorep1); //SCORE P1
printf("SCORE P2: %d\n", scorep2); //SCORE P2
}






else if(scorep2 > scorep1){                                 //P2 venceu de P1
printf("O PLAYER 2 VENCEU õ/\n");
printf("___________________________________________________________________________________________\n");
printf("PORCENTAGEM DE ACERTO DE P1: %.2f\n", porcentagemp1);
printf("PORCENTAGEM DE ACERTO DE P2: %.2f\n", porcentagemp2);
printf("___________________________________________________________________________________________\n");
printf("SCORE P1: %d\n", scorep1);
printf("SCORE P2: %d\n", scorep2);
}




else if(scorep1 == scorep2){                                //caso de empate
printf("EMPATE õ/\n");
printf("___________________________________________________________________________________________\n");
printf("PORCENTAGEM DE ACERTO DE P1: %.2f\n", porcentagemp1);
printf("PORCENTAGEM DE ACERTO DE P2: %.2f\n", porcentagemp2);
printf("___________________________________________________________________________________________\n");
printf("SCORE P1: %d\n", scorep1);
printf("SCORE P2: %d\n", scorep2);



}
printf("___________________________________________________________________________________________\n\n");
arq = fopen("hist.txt", "a+");
fprintf(arq,"||||||||||||||||||||||||FIM DE JOGO|||||||||||||||||||||\n");
fclose(arq);

return 0;
}


