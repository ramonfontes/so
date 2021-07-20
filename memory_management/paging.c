#include <stdio.h>
#include <curses.h>

void main(){
  int ms, ps, nop, np, rempages, i, j, x, y, pa, offset;
  int s[10], fno[10][20];

  printf("\nInforme o tamanho da memória: ");
  scanf("%d",&ms);
  printf("\nInforme o tamanho da página: ");
  scanf("%d",&ps);
  nop = ms/ps;
  printf("\nO no. de páginas disponíveis na memória são %d ",nop);
  printf("\nInforme o número de processos: ");
  scanf("%d", &np);
  rempages = nop;

  for(i=1;i<=np;i++){
    printf("\nInforme o número de páginas necessárias para p[%d]: ",i);
    scanf("%d",&s[i]);
    if(s[i] >rempages){
      printf("\nMemória está cheia");
      break;
    }

    rempages = rempages - s[i];
    printf("\nInforme a tabela de página para p[%d]: ",i);

    for(j=0;j<s[i];j++)
      scanf("%d",&fno[i][j]);
  }

  printf("\nInforme o endereço lógico para buscar o endereço físico ");
  printf("\nInforme o no. do Processo, o número da página e o offset:");
  scanf("%d %d %d",&x,&y, &offset);

  if(x>np || y>=s[i] || offset>=ps)
    printf("\nProcesso Inválido ou Número da Página ou offset");
  else{
    pa=fno[x][y]*ps+offset;
    printf("\nO endereço físico é %d",pa);
  }
}
