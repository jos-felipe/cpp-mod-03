/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josfelip <josfelip@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:57:05 by josfelip          #+#    #+#             */
/*   Updated: 2024/10/22 16:04:46 by josfelip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// Construtor
ClapTrap::ClapTrap(const std::string& name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0) {
    std::cout << "ClapTrap " << this->name << " has been created!" << std::endl;
}

// Destrutor
ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap " << this->name << " has been destroyed!" << std::endl;
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
