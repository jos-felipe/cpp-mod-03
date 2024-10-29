# C++ Module 03 - Herança

Este projeto aborda a implementação de classes em C++ com foco na herança, parte fundamental da Programação Orientada a Objetos (POO). Ao longo dos exercícios, construímos classes derivadas, explorando conceitos de encapsulamento, reutilização de código e polimorfismo.

## Estrutura do Projeto

O projeto é composto por quatro exercícios que se constroem progressivamente, introduzindo diversos aspectos de herança entre classes. Abaixo, um resumo de cada exercício:

### Exercício 00: Aaaaand... OPEN!
- **Diretório**: `ex00/`
- **Arquivos**: `Makefile`, `main.cpp`, `ClapTrap.{h/hpp, cpp}`
- **Descrição**: Implementação da classe `ClapTrap`, que possui atributos como `nome`, `pontos de vida`, `pontos de energia`, e `dano de ataque`. A classe inclui métodos para atacar (`attack`), receber dano (`takeDamage`), e se reparar (`beRepaired`), com mensagens informativas para cada ação.

### Exercício 01: Serena, my love!
- **Diretório**: `ex01/`
- **Arquivos**: Arquivos do `ex00` + `ScavTrap.{h/hpp, cpp}`
- **Descrição**: Criação da classe derivada `ScavTrap`, que herda da `ClapTrap`. `ScavTrap` redefine o comportamento de `attack` e adiciona o método `guardGate`, que ativa o modo "guardião".

### Exercício 02: Repetitive work
- **Diretório**: `ex02/`
- **Arquivos**: Arquivos dos exercícios anteriores + `FragTrap.{h/hpp, cpp}`
- **Descrição**: Introdução da classe `FragTrap`, outra classe derivada de `ClapTrap`, com atributos e mensagens específicas para construção e destruição. Adiciona o método `highFivesGuys` para uma interação amigável.

### Exercício 03: Now it’s weird!
- **Diretório**: `ex03/`
- **Arquivos**: Arquivos dos exercícios anteriores + `DiamondTrap.{h/hpp, cpp}`
- **Descrição**: Implementação da classe `DiamondTrap`, que herda de `ScavTrap` e `FragTrap`. Possui atributos mistos e o método `whoAmI` para exibir seu nome e o nome da instância `ClapTrap`.

## Requisitos

- Compilador de C++ com suporte a C++98
- Make

## Como Executar

Cada diretório de exercício contém seu próprio `Makefile`. Para compilar e executar um exercício:

```bash
cd ex0X   # Navegue até o diretório do exercício
make      # Compile o código
./program # Execute o binário resultante (ajuste o nome conforme necessário)
