#include "DiamondTrap.hpp"

int main() {
    DiamondTrap diamond("DI4M-TP");
    diamond.whoAmI();
    diamond.attack("target");
	
	DiamondTrap ruby(diamond);
    ruby.whoAmI();

    return 0;
}
