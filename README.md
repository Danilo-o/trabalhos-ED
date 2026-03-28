# trabalhos-ED
Atividades avaliativas 1, 2 e 3. Estrutura de Dados 3º Semestre

# Exercicios AV1 :

  [Exercicio_1](Trabalhos/AV1/Exercicio_01.c): O código cria 3 Strings com até 10 caracteres e uma variável tamanho que usa a função "strlen" para calcular o comprimento da string que não sejam nulos, então é pedido que sejam digitados as palavras. A variavel "tamanho" recebe o tamanho da string e em seguida é criado um laço "for" para imprimir a palavra com as letras invertidas e na ordem inversa(as palavras são impressas da terceira para a primeira).
  
  [Exercicio_2](Trabalhos/AV1/Exercicio_02.c): É declarado um vetor "numeros" com 5 espaços todos inicializados com 0 para evitar lixo de memória, em seguida é pedido que os numeros sejam digitados para que fiquem armazenados(usa "for" incrementando). Por fim são impressos os números na ordem inversa(usando um "for" com decremento).
  
  [Exercicio_3](Trabalhos/AV1/Exercicio_03.c): É criado uma matriz 3x3, feito um "for" que armazena numeros nas linhas e colunas(i,j) ao serem digitados pelo usuário e então outro "for" passa imprimindo cada elemento da matriz multiplicado por 5.

  [Exercicio_4](Trabalhos/AV1/Exercicio_04.c): O código inicia pedindo ao usuário digite os valores a serem armazenados na matriz digitada, após isso cria a matriz identidade é feito a multiplicação da matriz informada pela matriz identidade e armazena o resultado em uma terceira matriz. Por fim é impresso a matriz originalmente informada, a identidade e o resultado da multiplicação.

  [Exercicio_5](../Trabalhos/AV1/Exercicio_05.c): É efetuada a inserção dos valores do vetor e da matriz pelo usuário, então é efetuado um laço "for" que percorre primeiro as colunas para que possa ser feita a multiplicação delas, ao ser feita a atribuição em um vetor de resultados é feita a soma dos resultados segundo suas respectivas colunas.

  [Exercicio_6](Trabalhos/AV1/Exercicio_06.c): É definida uma struct "Aluno" com os campos nome, matricula e media, em seguida é criado um vetor de 10 alunos e um laço "for" lê os dados de cada um pelo teclado. Após a leitura, outro "for" percorre o vetor e separa os alunos em dois novos vetores: aprovados (média >= 5.0) e reprovados (média < 5.0), usando contadores para controlar o índice de cada vetor. Por fim os dois vetores são impressos, primeiro os aprovados depois os reprovados.

  [Exercicio_7](Trabalhos/AV1/Exercicio_7.c): É definida uma struct "Livro" com os campos titulo, autor e ano, então é criado um vetor de 5 livros e um "for" lê os dados de cada um. Após isso é pedido ao usuário que digite um título para busca, o programa então percorre o vetor usando a função "strstr()" que verifica se o título buscado aparece dentro do título de cada livro (busca parcial). Todos os livros encontrados são impressos, caso nenhum seja achado uma mensagem de aviso é exibida.

  [Exercicio_8](Trabalhos/AV1/Exercicio_08.c): É declarado um array de 5 inteiros e um ponteiro "p" apontando para o início do array. Com um "for", os elementos são lidos usando apenas aritmética de ponteiros: "scanf("%d", (p + i))" acessa o endereço de cada posição sem usar colchetes. A impressão também usa aritmética de ponteiros, onde "*(p + i) * 2" desreferencia o ponteiro na posição i e imprime o dobro do valor lido.

  [Exercicio_9](Trabalhos/AV1/Exercicio_09.c): São lidos três inteiros e então é chamada a função "ordenar()" que recebe os três por referência. Dentro dela é feito um bubble sort manual com três comparações e trocas por variável temporária, colocando o menor em *a, o do meio em *b e o maior em *c. A função retorna 1 se os três valores forem iguais e 0 caso contrário. Como foram passados por referência, x, y e z já saem ordenados e são impressos direto no main().
 
  [Exercicio_10](Trabalhos/AV1/Exercicio_10.c): É definida uma struct "Aluno" contendo os campos nome (string) e nota (float). O programa lê um inteiro n e aloca dinamicamente memória para n alunos com malloc(). A função maiorNota() recebe um ponteiro para Aluno e a quantidade de elementos, percorrendo o bloco via aritmética de ponteiros ((alunos + i)->nota) e retornando um ponteiro para o aluno com a maior nota. 
  
