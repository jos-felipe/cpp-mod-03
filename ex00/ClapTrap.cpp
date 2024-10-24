#include "ClapTrap.hpp"

// Construtor padrão
ClapTrap::ClapTrap() : name("Default"), hitPoints(10), energyPoints(10), attackDamage(0) {
    std::cout << "ClapTrap " << name << " (default) has been created!" << std::endl;
}

// Construtor com parâmetros
ClapTrap::ClapTrap(const std::string& name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0) {
    std::cout << "ClapTrap " << this->name << " has been created!" << std::endl;
}

// Construtor de cópia
ClapTrap::ClapTrap(const ClapTrap& other) {
    *this = other;  // Reutilizamos o operador de atribuição
    std::cout << "ClapTrap " << other.name << " has been copied!" << std::endl;
}

// Destrutor
ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap " << name << " has been destroyed!" << std::endl;
}

// Operador de atribuição
ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
    if (this != &other) {
        this->name = other.name;
        this->hitPoints = other.hitPoints;
        this->energyPoints = other.energyPoints;
        this->attackDamage = other.attackDamage;
    }
    std::cout << "ClapTrap " << other.name << " has been assigned!" << std::endl;
    return *this;
}

// Função de ataque
void ClapTrap::attack(const std::string& target) {
    if (hitPoints <= 0 || energyPoints <= 0) {
        std::cout << "ClapTrap " << name << " has no energy or hit points to attack!" << std::endl;
        return;
    }
    energyPoints--;  // Gasta 1 ponto de energia
    std::cout << "ClapTrap " << name << " attacks " << target 
              << ", causing " << attackDamage << " points of damage!" << std::endl;
}

// Função para receber dano
void ClapTrap::takeDamage(unsigned int amount) {
    hitPoints -= amount;  // Reduz os pontos de vida
    if (hitPoints < 0) {
        hitPoints = 0;
    }
    std::cout << "ClapTrap " << name << " takes " << amount << " points of damage! "
              << "Remaining hit points: " << hitPoints << std::endl;
}

// Função para ser reparado
void ClapTrap::beRepaired(unsigned int amount) {
    if (hitPoints <= 0 || energyPoints <= 0) {
        std::cout << "ClapTrap " << name << " has no energy or hit points to repair!" << std::endl;
        return;
    }
    hitPoints += amount;  // Recupera os pontos de vida
    energyPoints--;  // Gasta 1 ponto de energia
    std::cout << "ClapTrap " << name << " is repaired for " << amount 
              << " points! Remaining hit points: " << hitPoints << std::endl;
}
