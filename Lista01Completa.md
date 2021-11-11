# Projeto-Lista1
Aluno: Vinícius Venceslau Venancio da Penha

Docente: Agostinho Brito

Engenharia Elétrica - UFRN

Lista 1 – Programação Avançada

Questão 1)

Resposta: Tendo em vista que a programação faz parte do desenvolvimento de projetos e serviços prestados pelas engenharias, é possível afirmar que o conteúdo de ponteiros é essencial, pois facilita o procedimento de criação e composição dos códigos. Nesse contexto, o ponteiro torna possível identificar e modificar um determinado endereço de memória.

Questão 2) 

a)	p == &i; Resposta: Verdadeiro, tendo em vista que ambos possuem o mesmo valor, ou seja, o valor do endereço da variável i.

b)	*p - *q; Resposta: 3 – 5, ou seja, -2.

c)	**&p; Resposta: Esta expressão tem valor igual a 3.

d)	3 - *p/(*q) + 7; Resposta: 3 + 7, ou seja, 10. Isso ocorre, pois *p/(*q) deveria ser 0.6, mas a divisão de variáveis do tipo inteiro retorna um valor inteiro, neste caso, 0.

Questão  3)

Resposta: 4094; 7; 5; 15; 9

Questão 4)

a)	p = &i;

b)	*q = &j;

c)	p = &*&i; 

d)	i = (*&)j;  ilegal

e)	i = *&j; 

f)	i = &&j; ilegal

g)	q = *p; ilegal

h)	i = (*p) + *q;

Questão 5)

a)	20 – Esperada.

b)	29 – Esperada.

c)	P – Esperada.

d)	e – Esperada.

e)	P – Esperada (retornou a primeira letra, pois ao escrever p3 = nome, e imprimir na tela “*p3”, se tem como resultado a primeira letra da string.)

f)	e – Esperada.

g)	t – Esperada (Tendo em vista que, anteriormente, p3 estava associada a letra “e”, ao decrementar uma unidade na variável p3, retorna na tela a letra anterior.)

h)	31 – Esperada (retornou o número da posição inicial do vetor. )

i)	45 – Esperada.

j)	27 – Esperada.

k)	31 – Esperada (uma vez que a variável p4 está relacionada ao último elemento do vetor e, posteriormente, ocorre um discremento de 2, obtém-se o valor de vetor[0].) 

l)	45 – Esperada.

m)	45 – Esperada (repetiu o valor da variável anterior.)


Questão 6)

a)	Esperada.

b)	Esperada.

c)	Esperada.

d)	Esperada.

e)	Esperada.

Questão 7)

Resposta:
Apenas “*(pulo + 2)” satisfaz a pergunta da questão.

Questão 8)

a) Válida, pois “p” está associado ao endereço de memória da segunda posição do vetor, ou seja, &mat[1].

b) Válida, pois “p” relaciona-se com o endereço de memória do primeiro elemento do vetor, ou seja, &mat[0].

c) Válida, pois corresponde a mesma expressão do item anterior.

d) Válida, a variável “x” passa a ter o valor correspondente ao primeiro elemento do vetor mat, ou seja, mat[0].

Questão 9)

Resposta: O primeiro programa exibe na tela do usuário os elementos presentes no vetor “vet”, neste caso, os valores apresentados são: 4, 9, 13. Em contrapartida, o programa número dois expõe na tela os endereços de memórias  de cada elemento do vetor, assim, por ser um vetor do tipo “inteiro”, a distância entre os endereços varia de 4 em 4 bytes.

Questão 10)

a)	x for declarado como char? Resposta: 4093, 4094 e 4095.

b)	x for declarado como int? Resposta: 4094, 4096 e 4098.

c)	x for declarado como float? Resposta: 4096, 4100 e 4104.

d)	x for declarado como double? Resposta: 4100, 4108 e 4116.

![image](https://user-images.githubusercontent.com/92820372/140997475-c9ca8175-9f0e-4656-904f-31c2ae4268df.png)

Questão 11)

a)	aloha[2] = value;

b)	scanf("%f", &aloha); 

c)	aloha = "value"; inválido

d)	printf("%f", aloha); 

e)	coisas[4][4] = aloha[3]; 

f)	coisas[5] = aloha; inválido

g)	pf = value; inválido

h)	pf = aloha;

Questão 12)

Resposta: O ponteiro em uma função é usado, comumente, como argumento da função. Nesse viés, através do ponteiro é possível reduzir o espaço de memória necessário para compilação/ execução do código. Isto ocorre, pois a variável ponteiro apontará para um endereço de memória, ao invés de ser necessário “duplicar” o conteúdo presente em uma variável qualquer.

Questão 13)

Resposta:

![image](https://user-images.githubusercontent.com/92820372/141008553-ad80816d-2160-46be-ac42-dfdccbe265e0.png)

Questão 14)
