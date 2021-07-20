#include <stdio.h>
#include <curses.h>

void main(){
  int ms, bs, nob, ef, n, mp[10], tif=0;
  int i,p=0;

  printf("Informe o total de memória disponível (em Bytes) -- ");
  scanf("%d", &ms);
  printf("Informe o tamanho do bloco - block size (em Bytes) -- ");
  scanf("%d", &bs);
  nob=ms/bs;
  ef=ms - nob*bs;
  printf("\nInforme o número de processos -- ");
  scanf("%d", &n);

  for(i=0;i<n;i++){
    printf("Informe a quantidade de mmemória necessária para o processo %d (em Bytes)-- ",i+1);
    scanf("%d", &mp[i]);
  }

  printf("\nNo. de blocos disponíveis em memória -- %d",nob);
  printf("\n\nPROCESSO\tMEMÓRIA NECESSÁRIA\t ALOCADA\tFRAGMENTAÇÃO INTERNA");

  for(i=0;i<n && p<nob;i++){
    printf("\n %d\t\t%d", i+1, mp[i]);
    if(mp[i] > bs)
      printf("\t\t\tNÃO\t\t\t---");
    else{
      printf("\t\t\tSIM\t\t%d", bs-mp[i]);
      tif = tif + bs-mp[i];
      p++;
    }
  }
  if(i<n)
    printf("\nMemória está cheia. Alguns processos não foram acomodados.");

  printf("\n\nTotal de Fragmentação Interna é %d", tif);
  printf("\nTotal de Fragmentação Externa é %d", ef);
  //getch();
}
