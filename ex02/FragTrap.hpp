#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
public:
    // Construtor padrão
    FragTrap();

    // Construtor com parâmetros
    FragTrap(const std::string& name);

    // Construtor de cópia
    FragTrap(const FragTrap& other);

    // Destrutor
    ~FragTrap();

    // Operador de atribuição
    FragTrap& operator=(const FragTrap& other);

    // Função especial
    void highFivesGuys(void);

    // Sobrescrevendo o método de ataque
    void attack(const std::string& target);
};

#endif
