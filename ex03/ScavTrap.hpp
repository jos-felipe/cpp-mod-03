#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
public:
    // Construtor padrão
    ScavTrap();

    // Construtor com parâmetros
    ScavTrap(const std::string& name);

    // Construtor de cópia
    ScavTrap(const ScavTrap& other);

    // Destrutor
    ~ScavTrap();

    // Operador de atribuição
    ScavTrap& operator=(const ScavTrap& other);

    // Função especial
    void guardGate();

    // Sobrescrevendo o método de ataque
    void attack(const std::string& target);
};

#endif
