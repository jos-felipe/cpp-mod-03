#include "ScavTrap.hpp"

int main() {
    // Criando uma instância de ScavTrap
    ScavTrap scavtrap("ST-99");

    // Testando o ataque do ScavTrap
    scavtrap.attack("Target-1");

    // Testando o recebimento de dano
    scavtrap.takeDamage(30);

    // Testando a reparação
    scavtrap.beRepaired(20);

    // Testando a função especial guardGate
    scavtrap.guardGate();

    return 0;
}
