**Compilador de Portugol para C**

**Descrição:**
O PortugolC é um compilador desenvolvido para converter programas escritos na linguagem de programação Portugol para código C. Ele consiste em dois componentes principais: um analisador léxico (`PCLexico.l`) e um analisador sintático (`PCSintatico.y`), ambos implementados com o uso das ferramentas Bison e Flex.

**Funcionalidades Principais:**

- **Análise Léxica e Sintática:** O PortugolC utiliza o analisador léxico e sintático para analisar a estrutura do programa em Portugol e convertê-lo para uma representação interna adequada para a geração de código C.

- **Compilação para C:** Após a análise léxica e sintática, o PortugolC gera código C equivalente ao programa em Portugol, permitindo sua compilação e execução em um ambiente de desenvolvimento C.

**Instruções de Compilação e Execução:**

1. **Compilação do Analisador Sintático e Léxico:**
   ```bash
   bison -d PCSintatico.y
   mv PCSintatico.tab.h sintatico.h
   mv PCSintatico.tab.c sintatico.c
   flex PCLexico.l
   mv lex.yy.c lexico.c
