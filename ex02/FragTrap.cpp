#include "ScavTrap.hpp"

// Construtor padrão
ScavTrap::ScavTrap() : ClapTrap() {
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
    std::cout << "ScavTrap " << name << " (default) has been created with 100 HP, 50 Energy, and 20 Attack Damage!" << std::endl;
}

// Construtor com parâmetros
ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name) {
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
    std::cout << "ScavTrap " << this->name << " has been created with 100 HP, 50 Energy, and 20 Attack Damage!" << std::endl;
}

// Construtor de cópia
ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other) {
    *this = other;
    std::cout << "ScavTrap " << other.name << " has been copied!" << std::endl;
}

// Destrutor
ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap " << name << " has been destroyed!" << std::endl;
}

// Operador de atribuição
ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
    if (this != &other) {
        ClapTrap::operator=(other);  // Usando o operador da classe base
        this->hitPoints = other.hitPoints;
        this->energyPoints = other.energyPoints;
        this->attackDamage = other.attackDamage;
    }
    std::cout << "ScavTrap " << other.name << " has been assigned!" << std::endl;
    return *this;
}

// Sobrescrevendo o método de ataque
void ScavTrap::attack(const std::string& target) {
    if (hitPoints <= 0 || energyPoints <= 0) {
        std::cout << "ScavTrap " << name << " has no energy or hit points to attack!" << std::endl;
        return;
    }
    energyPoints--;
    std::cout << "ScavTrap " << name << " ferociously attacks " << target 
              << ", causing " << attackDamage << " points of damage!" << std::endl;
}

// Função especial guardGate()
void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << name << " is now in Gatekeeper mode!" << std::endl;
}
