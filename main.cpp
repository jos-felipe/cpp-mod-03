#include "ClapTrap.hpp"

int main() {
    // Criando uma instância de ClapTrap com o construtor com parâmetros
    ClapTrap claptrap1("CT-42");

    // Usando o construtor de cópia
    ClapTrap claptrap2(claptrap1);

    // Usando o operador de atribuição
    ClapTrap claptrap3;
    claptrap3 = claptrap1;

    // Testando algumas funcionalidades
    claptrap1.attack("Enemy-1");
    claptrap2.takeDamage(5);
    claptrap3.beRepaired(3);

    return 0;
}
