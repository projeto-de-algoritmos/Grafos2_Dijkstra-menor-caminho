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

No jogo o rato é colocado em uma divisão A com coordenada (n,m) em uma gaiola e deve chegar o mais rápido possível a linha de chegada B. O rato pode se movimentar apenas pelas portas laterais das divisões  A gaiola tem dimensão de 5x5

## Input:

- Coordenada inicial 
- Coordenada final

## Output:

- Printar o menor caminho através divisões utilizadas para chegar ao ponto B.

## Solução
A solução pode ser dada por um grafo em que cada divisão é um nó e cada porta é um vértice de peso 1. Para achar o menor caminho possível será utilizado o algoritmo de Dijkstra. O nó inicial é a coordenada inicial e então é gerada a arvore de caminho minimo e então é imprimido o menor caminho.

**Linguagem**: C ++

### Executando o projeto

Faça o download ou clone o repositório e execute na pasta que contem o arquivo cpp

          $g++ ex-grafo2.cpp -std=c++17 -o prog
          $./prog
  
