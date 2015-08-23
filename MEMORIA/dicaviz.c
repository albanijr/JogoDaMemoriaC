void dicaviz(int *linhajogada1, int *colunajogada1,char dica[1], char matriz[4][6]){

    int cont = -1;
    int testelinha1 = *linhajogada1 + 1;
    int testelinha2 = *linhajogada1 - 1;
    int colunateste = *colunajogada1 + cont;
    for(cont = -1; cont <=1; cont++){
    int colunateste = *colunajogada1 + cont;
        if(matriz[testelinha1][colunateste] == matriz[*linhajogada1][*colunajogada1]){dica[1] = 'Q';}
        if(matriz[*linhajogada1][colunateste] == matriz[*linhajogada1][*colunajogada1]){if(cont != 0){dica[1] = 'Q';}}
        if(matriz[testelinha2][colunateste] == matriz[*linhajogada1][*colunajogada1]){dica[1] = 'Q';}
    }
   for(cont = -2; cont <= 2; cont++){//varia de -2 a 2 ou seja 5 posic
        if(matriz[testelinha1 + 1][colunateste] == matriz[*linhajogada1][*colunajogada1]){dica[1] = 'M';}
        if(matriz[testelinha1]    [colunateste] == matriz[*linhajogada1][*colunajogada1]){if(cont != -1 && cont != 0 && cont != 1){dica[1] = 'M';}}
        if(matriz[*linhajogada1]  [colunateste] == matriz[*linhajogada1][*colunajogada1]){if(cont != -1 && cont != 0 && cont != 1){dica[1] = 'M';}}
        if(matriz[testelinha2]    [colunateste] == matriz[*linhajogada1][*colunajogada1]){if(cont != -1 && cont != 0 && cont != 1){dica[1] = 'M';}}
        if(matriz[testelinha2 - 1][colunateste] == matriz[*linhajogada1][*colunajogada1]){dica[1] = 'M';}
   }
    for(cont = -3; cont <= 3; cont++){//varia de -3 a 3 ou seja 7 posic
        if(matriz[testelinha1 + 2][colunateste] == matriz[*linhajogada1][*colunajogada1]){dica[1] = 'F';}
        if(matriz[testelinha1 + 1][colunateste] == matriz[*linhajogada1][*colunajogada1]){if(cont != -2 &&cont != -1 && cont != 0 && cont != 1 && cont !=2){dica[1] = 'F';}}
        if(matriz[testelinha1]    [colunateste] == matriz[*linhajogada1][*colunajogada1]){if(cont != -2 &&cont != -1 && cont != 0 && cont != 1 && cont !=2){dica[1] = 'F';}}
        if(matriz[*linhajogada1]  [colunateste] == matriz[*linhajogada1][*colunajogada1]){if(cont != -2 &&cont != -1 && cont != 0 && cont != 1 && cont !=2){dica[1] = 'F';}}
        if(matriz[testelinha2]    [colunateste] == matriz[*linhajogada1][*colunajogada1]){if(cont != -2 &&cont != -1 && cont != 0 && cont != 1 && cont !=2){dica[1] = 'F';}}
        if(matriz[testelinha2 - 1][colunateste] == matriz[*linhajogada1][*colunajogada1]){if(cont != -2 &&cont != -1 && cont != 0 && cont != 1 && cont !=2){dica[1] = 'F';}}
        if(matriz[testelinha2 - 2][colunateste] == matriz[*linhajogada1][*colunajogada1]){dica[1] = 'F';}
   }

}
