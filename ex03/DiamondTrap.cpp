#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap() : ClapTrap("Default_clap_name"), FragTrap(), ScavTrap(), name("Default")
{
	std::cout << "DiamondTrap default constructor called" << std::endl;
	this->hitPoints = FragTrap::hitPoints;
    this->energyPoints = ScavTrap::energyPoints;
    this->attackDamage = FragTrap::attackDamage;
}

DiamondTrap::DiamondTrap(const std::string& name) : ClapTrap(name + "_clap_name"), FragTrap(), ScavTrap(), name(name) {
    std::cout << "DiamondTrap parameterized constructor called for " << name << " constructed." << std::endl;
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 30;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other) : ClapTrap(other), FragTrap(other), ScavTrap(other) {
    *this = other;
    std::cout << "DiamondTrap " << other.name << " has been copied!" << std::endl;
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap " << name << " destructed." << std::endl;
}


DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other) {
    if (this != &other) {
        ClapTrap::operator=(other);
		this->name = other.name;
	}
    std::cout << "DiamondTrap " << other.name << " has been assigned!" << std::endl;
    return *this;
}

void DiamondTrap::whoAmI() {
    std::cout << "DiamondTrap name: " << this->name << ", ClapTrap name: " << ClapTrap::name << std::endl;
}
