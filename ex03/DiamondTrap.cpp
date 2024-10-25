#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap(const std::string& name) : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name), name(name) {
    this->hitPoints = FragTrap::hitPoints;
    this->energyPoints = ScavTrap::energyPoints;
    this->attackDamage = FragTrap::attackDamage;
    std::cout << "DiamondTrap " << name << " constructed." << std::endl;
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap " << name << " destructed." << std::endl;
}

void DiamondTrap::whoAmI() {
    std::cout << "DiamondTrap name: " << this->name << ", ClapTrap name: " << ClapTrap::name << std::endl;
}
