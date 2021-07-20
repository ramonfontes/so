## Introdução

Este repositório contempla algumas técnicas e métodos de gestão e alocação de memória que são demonstrados através de programas que **simulam** essas técnicas.

### MFT (Multiprogramming with a Fixed number of Tasks)

Compile e execute o programa [mft.c](https://github.com/ramonfontes/so/blob/master/memory_management/mft.c) e responda ao questionário conforme abaixo:

- Informe o total de memória disponível (em Bytes): 1000
- Informe o tamanho do bloco - block size (em Bytes): 300
- Informe o número de processos: 5
- Informe a quantidade de mmemória necessária para o processo 1 (em Bytes): 275
- Informe a quantidade de mmemória necessária para o processo 2 (em Bytes): 400
- Informe a quantidade de mmemória necessária para o processo 3 (em Bytes): 290
- Informe a quantidade de mmemória necessária para o processo 4 (em Bytes): 293
- Informe a quantidade de mmemória necessária para o processo 5 (em Bytes): 100
- No. de blocos disponíveis em memória: 3


#### Perguntas:

1. Houve algum processo com memória não alocada? Qual? Justifique.
2. Houve fragmentação interna? Justifique.
3. Houve fragmentação externa? Justifique.

---

### MVT (Multiprogramming with a Variable number of Tasks)

Compile e execute o programa [mvt.c](https://github.com/ramonfontes/so/blob/master/memory_management/mvt.c) e responda ao questionário conforme abaixo:

- Informe o total de memória disponível (em Bytes): 1000
- Informe a quantidade de mmemória necessária para o processo 1 (em Bytes): 400
- Memória está alocada para o Processo 1
- Você deseja continuar (s/n): s
- Informe a quantidade de mmemória necessária para o processo 2 (em Bytes): 275
- Memória está alocada para o Processo 2
- Você deseja continuar (s/n): s
- Informe a quantidade de mmemória necessária para o processo 3 (em Bytes): 550

#### Perguntas:

1. Informe o total de memória alocada e justifique a resposta.
2. Houve fragmentação interna? Justifique.
3. Quem utiliza recursos de forma mais eficiente? MFT ou MVT?

---

### Worst-Fit

Compile e execute o programa [worst_fit.c](https://github.com/ramonfontes/so/blob/master/memory_management/worst_fit.c) e responda ao questionário conforme abaixo:

- Informe o número de blocos: 3
- Informe o número de arquivos: 2
- Informe o tamanho dos blocos:
- Bloco 1: 5
- Bloco 2: 2
- Bloco 3: 7
- Informe o tamanho dos arquivos:
- Arquivo 1: 1
- Arquivo 2: 4

#### Perguntas:

1. Comente o resultado observado.

---

### Best-Fit

Compile e execute o programa [best_fit.c](https://github.com/ramonfontes/so/blob/master/memory_management/best_fit.c) e responda ao questionário conforme abaixo:

- Informe o número de blocos: 3
- Informe o número de arquivos: 2
- Informe o tamanho dos blocos:
- Bloco 1: 5
- Bloco 2: 2
- Bloco 3: 7
- Informe o tamanho dos arquivos:
- Arquivo 1: 1
- Arquivo 2: 4

#### Perguntas:

1. Comente o resultado observado.

---

### First-Fit

Compile e execute o programa [first_fit.c](https://github.com/ramonfontes/so/blob/master/memory_management/first_fit.c) e responda ao questionário conforme abaixo:

- Informe o número de blocos: 3
- Informe o número de arquivos: 2
- Informe o tamanho dos blocos:
- Bloco 1: 5
- Bloco 2: 2
- Bloco 3: 7
- Informe o tamanho dos arquivos:
- Arquivo 1: 1
- Arquivo 2: 4

#### Perguntas:

1. Comente o resultado observado.
2. Faça uma análise comparativa e justifique através dos resultados obtidos em Worst-Fit, Best-Fit e First-Fit, qual deles apresentou melhor desempenho e porque.

---

### Paginação (Paging)

Compile e execute o programa [paging.c](https://github.com/ramonfontes/so/blob/master/memory_management/paging.c) e responda ao questionário conforme abaixo:


- Informe o tamanho da memória: 1000
- Informe o tamanho da página: 100
- > O no. de páginas disponíveis na memória são 10
- Informe o número de processos: 3
- Informe o número de páginas necessárias para p[1]: 4
- Informe a tabela de página para p[1]: 8 6 9 5
- Informe o número de páginas necessárias para p[2]: 5
- Informe a tabela de página para p[2]: 1 4 5 7 3
- Informe o número de páginas necessárias para p[3]: 5

#### Perguntas:

1. A memória está cheia? Comente.

- Informe o no. do Processo, o número da página e o offset: 2 3 60

2. O que seria o offset? Faça um paralelo entre o seu conceito e o resultado apresentado para o endereço físico.
