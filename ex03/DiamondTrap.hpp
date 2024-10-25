#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {
private:
    std::string name;

public:
    DiamondTrap(const std::string& name);
    ~DiamondTrap();
    void whoAmI();
    using ScavTrap::attack; // Usar o método attack de ScavTrap
};

#endif // DIAMONDTRAP_HPP
