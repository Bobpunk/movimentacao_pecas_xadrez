# 🧠 Simulador de Movimentação de Peças de Xadrez em C

**Repositório**: `movimentacao_pecas_xadrez`  
**Autor:** José Cecílio Fonsêca Júnior ([LinkedIn](https://www.linkedin.com/in/jcfonsecajunior/))  
**Instituição:** Universidade Estácio de Sá

- 📚 [Descrição](#descrição)
- ⚙️ [Requisitos](#requisitos)
- 🚀 [Compilação e Execução](#compilação-e-execução)
- 🕹️ [Desafios e Funcionalidades](#desafios-e-funcionalidades)
- 📁 [Estrutura](#estrutura)
- 🔧 [Sugestões de Expansão](#sugestões-de-expansão)
- 📄 [Licença](#licença)
- 👨‍💻 [Sobre o Autor](#sobre-o-autor)
- 📤 [Saída do Código](#saída-do-código)

## 📚 Descrição

Este projeto em C simula os movimentos básicos de peças de xadrez (Rainha, Torre, Bispo e Cavalo) utilizando diferentes técnicas de programação, distribuídas em níveis de dificuldade:

- Nível **Novato**: loops simples (`for`, `while`, `do...while`)  
- Nível **Aventureiro**: loops aninhados e controle de fluxo (`break`, `continue`)  
- Nível **Mestre**: recursividade, loops complexos e combinação de técnicas

## ⚙️ Requisitos

- Sistema operacional: Pop!_OS (ou qualquer Linux com GCC 12 ou superior)  
- Compilador: GCC 12

```bash
sudo apt update
sudo apt install gcc-12
gcc-12 --version
```

## 🚀 Compilação e Execução

```bash
git clone https://github.com/Bobpunk/movimentacao_pecas_xadrez.git
cd movimentacao_pecas_xadrez
gcc-12 -o movimentacao main.c -Wall -Wextra
./movimentacao
```

## 🕹️ Desafios e Funcionalidades

### 🧩 Desafio Novato

- Rainha: movimentação recursiva para a esquerda  
- Torre: movimentação recursiva para a direita  
- Bispo: movimentação recursiva em diagonal  

### 🧗 Desafio Aventureiro

- Bispo (loops): simulação de movimento diagonal com `for` aninhado  
- Cavalo: movimento em "L" com uso de `continue` e `break`

### 🧙‍♂️ Desafio Mestre

- Combinação de recursividade e loops para lógicas mais complexas  

## 📁 Estrutura

```c
void moverRainha(int casas);
void moverTorre(int casas);
void moverBispo(int casas);
```

## 🔧 Sugestões de Expansão

- Adicionar visualização de tabuleiro ASCII (modo texto 8x8)  
- Modularizar o código em arquivos `.c` e `.h` separados  
- Criar menu interativo para o usuário escolher as peças  
- Adicionar movimentações aleatórias com `rand()`  
- Implementar controle de posição em coordenadas

## 📄 Licença

Este projeto é de uso livre para fins **educacionais e não comerciais**.

## 👨‍💻 Sobre o Autor

Desenvolvido por **José Cecílio Fonsêca Júnior**, estudante da **Universidade Estácio de Sá**.  
Ambiente de desenvolvimento: **Pop!_OS Linux** com **GCC 12**  
Repositório oficial: [github.com/Bobpunk/movimentacao_pecas_xadrez](https://github.com/Bobpunk/movimentacao_pecas_xadrez)

## 📤 Saída do Código

<details>
<summary>Clique para expandir</summary>

```
 Movimentação da Rainha. 
Esquerda
Esquerda
Esquerda
Esquerda
Esquerda
A rainha se movimentou para a esquerda 5 vezes.

 Movimentação da Torre 
Direita
Direita
Direita
Direita
A torre se movimentou para a direita 4 vezes.

 Movimentação do Bispo.
Diagonal direita
Diagonal direita
Diagonal direita
Diagonal direita
Diagonal direita
O bispo se movimentou na diagonal 5 vezes

--- Movimentação do Bispo (Loops Aninhados) ---
Diagonal direita (Cima + Direita)
Diagonal direita (Cima + Direita)
Diagonal direita (Cima + Direita)
Diagonal direita (Cima + Direita)
Diagonal direita (Cima + Direita)
O bispo se movimentou na diagonal 5 vezes.

Movimentação do Cavalo

Iniciando movimento em L #1:
Uma casa para cima
Uma casa para cima
Uma casa para a direita

(Cavalo pulou o movimento #2)

Iniciando movimento em L #3:
Uma casa para cima
Uma casa para cima
Uma casa para a direita
(Cavalo parou após o movimento #3)
O cavalo finalizou seus movimentos.
```

</details>
