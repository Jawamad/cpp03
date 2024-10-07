#include "../inc/DiamondTrap.hpp"

int main( void )
{
	DiamondTrap scav1("Bernard"), scav2("Borris");
	
	std::cout << std::endl;

	std::cout << scav1.getName() << " has " << scav1.getHitpoints() << " hp." << std::endl;
	std::cout << scav1.getName() << " has " << scav1.getEnergypoints() << " energy." << std::endl;
	std::cout << scav2.getName() << " has " << scav2.getHitpoints() << " hp." << std::endl;
	std::cout << scav2.getName() << " has " << scav2.getEnergypoints() << " energy." << std::endl;
	
	std::cout << std::endl;

	scav1.attack("Desk");
	scav2.attack("his car");

	std::cout << std::endl;

	std::cout << scav2.getName() << " get hit back by the car for 40 damage." << std::endl;
	scav2.takeDamage(40);
	std::cout << std::endl;
	std::cout << scav1.getName() << " has " << scav1.getHitpoints() << " hp." << std::endl;
	std::cout << scav1.getName() << " has " << scav1.getEnergypoints() << " energy." << std::endl;
	std::cout << scav2.getName() << " has " << scav2.getHitpoints() << " hp." << std::endl;
	std::cout << scav2.getName() << " has " << scav2.getEnergypoints() << " energy." << std::endl;
	std::cout << std::endl;

	std::cout << scav2.getName() << " repair itself for 20 hp." << std::endl;
	scav2.beRepaired(20); 
	scav1.whoAmI();
	scav2.whoAmI();

	std::cout << std::endl;
	std::cout << scav1.getName() << " has " << scav1.getHitpoints() << " hp." << std::endl;
	std::cout << scav1.getName() << " has " << scav1.getEnergypoints() << " energy." << std::endl;
	std::cout << scav2.getName() << " has " << scav2.getHitpoints() << " hp." << std::endl;
	std::cout << scav2.getName() << " has " << scav2.getEnergypoints() << " energy." << std::endl;
	std::cout << std::endl;


	return 0;
}