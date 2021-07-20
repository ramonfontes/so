#include <stdio.h>
#include <curses.h>

#define max 25

void main(){
  int frag[max], b[max], f[max], i, j, nb, nf, temp, lowest=10000;
  static int bf[max], ff[max];

  printf("\n\tEsquema de Gerenciamento de Memória - Best Fit\n");
  printf("\nInforme o número de blocos: ");
  scanf("%d",&nb);
  printf("Informe o número de arquivos: ");
  scanf("%d",&nf);
  printf("\nInforme o tamanho dos blocos (em Bytes):\n");

  for(i=1;i<=nb;i++){
    printf("Bloco %d: ", i);
    scanf("%d", &b[i]);
  }

  printf("Informe o tamanho dos arquivos (em Bytes):\n");

  for(i=1;i<=nf;i++){
    printf("Arquivo %d: ", i);
    scanf("%d", &f[i]);
  }

  for(i=1;i<=nf;i++){
    for(j=1;j<=nb;j++){
      if(bf[j]!=1){
        temp=b[j]-f[i];
        if(temp>=0)
          if(lowest>temp){
            ff[i]=j;
            lowest=temp;
          }
      }
    }
    frag[i]=lowest;
    bf[ff[i]]=1;
    lowest=10000;
  }
  printf("\nArquivo_no:\tTamanho Arquivo :\tBloco_no:\tTamanho Bloco:\tFragmento");

  for(i=1;i<=nf && ff[i]!=0;i++)
    printf("\n%d\t\t%d\t\t\t%d\t\t%d\t\t%d", i, f[i], ff[i], b[ff[i]], frag[i]);
}
