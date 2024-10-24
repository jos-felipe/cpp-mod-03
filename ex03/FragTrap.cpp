#include "FragTrap.hpp"

// Construtor padrão
FragTrap::FragTrap() : ClapTrap() {
    hitPoints = 100;
    energyPoints = 100;
    attackDamage = 30;
    std::cout << "FragTrap " << name << " (default) has been created with 100 HP, 100 Energy, and 30 Attack Damage!" << std::endl;
}

// Construtor com parâmetros
FragTrap::FragTrap(const std::string& name) : ClapTrap(name) {
    hitPoints = 100;
    energyPoints = 100;
    attackDamage = 30;
    std::cout << "FragTrap " << this->name << " has been created with 100 HP, 100 Energy, and 30 Attack Damage!" << std::endl;
}

// Construtor de cópia
FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other) {
    *this = other;
    std::cout << "FragTrap " << other.name << " has been copied!" << std::endl;
}

// Destrutor
FragTrap::~FragTrap() {
    std::cout << "FragTrap " << name << " has been destroyed!" << std::endl;
}

// Operador de atribuição
FragTrap& FragTrap::operator=(const FragTrap& other) {
    if (this != &other) {
        ClapTrap::operator=(other);  // Usando o operador da classe base
        this->hitPoints = other.hitPoints;
        this->energyPoints = other.energyPoints;
        this->attackDamage = other.attackDamage;
    }
    std::cout << "FragTrap " << other.name << " has been assigned!" << std::endl;
    return *this;
}

// Sobrescrevendo o método de ataque
void FragTrap::attack(const std::string& target) {
    if (hitPoints <= 0 || energyPoints <= 0) {
        std::cout << "FragTrap " << name << " has no energy or hit points to attack!" << std::endl;
        return;
    }
    energyPoints--;
    std::cout << "FragTrap " << name << " ferociously attacks " << target 
              << ", causing " << attackDamage << " points of damage!" << std::endl;
}

// Função especial
void FragTrap::highFivesGuys(void) {
    std::cout << "FragTrap " << name << " requests a high five!" << std::endl;
}
