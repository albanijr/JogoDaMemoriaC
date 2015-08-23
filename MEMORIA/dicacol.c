void dicacoluna(int *linhajogada1,int *colunajogada1,int *dicacol, char matriz[4][6]){
int  li, co;
for (li = 0; li < 4; li++ )
{
for (co = 0; co < 6; co++ )
{
if(matriz[li][co] == matriz[*linhajogada1][*colunajogada1] &&( li != *linhajogada1 | co != *colunajogada1)){*dicacol = co;}
}
}
}
