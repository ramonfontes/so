#include <stdio.h>
#include <curses.h>

void main(){
  int ms, mp[10], i, temp, n=0;
  char ch = 's';

  printf("\nInforme o total de memória disponível (em Bytes)-- ");
  scanf("%d", &ms);
  temp=ms;

  for(i=0;ch=='s';i++,n++){
    printf("\nInforme a quantidade de mmemória necessária para o processo %d (em Bytes) -- ", i+1);
    scanf("%d", &mp[i]);
    if(mp[i]<=temp){
      printf("\nMemória está alocada para o Processo %d ", i+1);
      temp = temp - mp[i];
    }
    else{
      printf("\nMemória está cheia");
      break;
    }
    printf("\nVocê deseja continuar (s/n) -- ");
    scanf(" %c", &ch);
  }

  printf("\n\nTotal de Memória Disponível -- %d", ms);
  printf("\n\n\tPROCESSO\t\t MEMÓRIA ALOCADA ");

  for(i=0;i<n;i++)
    printf("\n \t%d\t\t%d", i+1, mp[i]);

  printf("\n\nTotal de Memória Alocada é %d", ms-temp);
  printf("\nTotal de Fragmentação Externa é %d", temp);
}
