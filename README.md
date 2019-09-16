# Faça o rato chegar do ponto A ao B o mais rápido possível

**Número da Lista**: 2<br>
**Conteúdo da Disciplina**: Grafos<br>

## Alunos
|Matrícula | Aluno |
| -- | -- |
| 15/0018673  |  Mikhaelle de Carvalho Bueno |
|   |  Guilherme Deusdara |

## Sobre 

Para colocar em prática os algoritmos aprendidos na disciplina, foi criado um problema para ilustrar o funcionamento do algoritmo de Dijkstra.

## Problema:

No jogo o rato é colocado em uma divisão A com coordenada (n,m) em uma gaiola e deve chegar o mais rápido possível a linha de chegada B. O rato pode se movimentar apenas pelas portas laterais das divisões sendo que algumas dessas divisões tem portas trancadas. A gaiola tem dimensão de 5x5 e tem as seguintes portas disponíveis:

~imagem da gaiola

## Input:

- Coordenada inicial 
- Coordenada final

## Output:

- Se a coordenada inicial for em uma divisão com portas fechadas imprimir: O rato está trancado.
- Se não existir um caminho de A a B imprimir: O rato não pode chegar ao destino.
- Se o caminho existir, imprimir as coordenadas das divisões utilizadas para chegar ao ponto B pelo menor caminho possível.

## Solução
A solução pode ser dada por um grafo em que cada divisão é um nó e cada porta, se aberta, é um vértice de peso 1. Para achar o menor caminho possível será utilizado o algoritmo de Dijkstra. O nó inicial é a coordenada inicial e então é gerada a arvore de caminho minimo, se não existir o nó final nessa árvore então não é possível chegar do ponto a ao ponto b, caso o nó exista é imprimido então o menor caminho.

## Instalação 

**Linguagem**: 

### Executando o projeto

#### Pré-requisitos

#### Comandos para executar
