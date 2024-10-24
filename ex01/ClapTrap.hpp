#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap {
protected:
    std::string name;
    int hitPoints;
    int energyPoints;
    int attackDamage;

public:
    // Construtor padrão
    ClapTrap();

    // Construtor com parâmetros
    ClapTrap(const std::string& name);

    // Construtor de cópia
    ClapTrap(const ClapTrap& other);

    // Destrutor
    ~ClapTrap();

    // Operador de atribuição
    ClapTrap& operator=(const ClapTrap& other);

    // Funções públicas
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif
