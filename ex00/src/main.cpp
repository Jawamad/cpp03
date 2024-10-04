#include "../inc/ClapTrap.hpp"

int main( void )
{
	ClapTrap	r1("Regis"), r2("Robert"), r3("Raymond");
	r2.setAttackdamage(2);
	r3.setAttackdamage(10);

	std::cout << std::endl;
	std::cout << r1.getName() << " will attack somehting." << std::endl;
	r1.attack("his computer");
	std::cout << std::endl;
	std::cout << r1.getName() << " will attack " << r2.getName() << std::endl;
	r1.attack(r2);

	std::cout << std::endl;

	std::cout << r1.getName() << " has " << r1.getHitpoints() << " hp." << std::endl;
	std::cout << r1.getName() << " has " << r1.getEnergypoints() << " energy." << std::endl;
	std::cout << r2.getName() << " has " << r2.getHitpoints() << " hp." << std::endl;
	std::cout << r2.getName() << " has " << r2.getEnergypoints() << " energy." << std::endl;
	std::cout << r3.getName() << " has " << r3.getHitpoints() << " hp." << std::endl;
	std::cout << r3.getName() << " has " << r3.getEnergypoints() << " energy." << std::endl;

	std::cout << std::endl;

	std::cout << "Revenge : " << r2.getName() << " will attack " << r1.getName() << std::endl;
	r2.attack(r1);

	std::cout << std::endl;

	std::cout << r1.getName() << " has " << r1.getHitpoints() << " hp." << std::endl;
	std::cout << r1.getName() << " has " << r1.getEnergypoints() << " energy." << std::endl;
	std::cout << r2.getName() << " has " << r2.getHitpoints() << " hp." << std::endl;
	std::cout << r2.getName() << " has " << r2.getEnergypoints() << " energy." << std::endl;
	std::cout << r3.getName() << " has " << r3.getHitpoints() << " hp." << std::endl;
	std::cout << r3.getName() << " has " << r3.getEnergypoints() << " energy." << std::endl;
	
	std::cout << std::endl;

	std::cout << r3.getName() << " will attack " << r2.getName() << " because he don't like violence." << std::endl;
	r3.attack(r2);
	std::cout << std::endl;
	std::cout << r2.getName() << " will try to repair for 10 hp." << std::endl;
	r2.beRepaired(10);
	std::cout << std::endl;
	std::cout << r1.getName() << " will try to repair for 10 hp." << std::endl;
	r1.beRepaired(10);
	std::cout << std::endl;

	std::cout << r1.getName() << " has " << r1.getHitpoints() << " hp." << std::endl;
	std::cout << r1.getName() << " has " << r1.getEnergypoints() << " energy." << std::endl;
	std::cout << r2.getName() << " has " << r2.getHitpoints() << " hp." << std::endl;
	std::cout << r2.getName() << " has " << r2.getEnergypoints() << " energy." << std::endl;
	std::cout << r3.getName() << " has " << r3.getHitpoints() << " hp." << std::endl;
	std::cout << r3.getName() << " has " << r3.getEnergypoints() << " energy." << std::endl;

	std::cout << std::endl;

	std::cout << r3.getName() << " will attack " << r1.getName() << " because he is dumb. Because he is exhausted." << std::endl;
	r3.setEnergypoints(0);
	r3.attack(r1);
	std::cout << std::endl;

	r1.setAttackdamage(20);
	std::cout << r1.getName() << " feel like he is stronger. He want to attack " << r2.getName() << " body to test it." << std::endl;
	r1.attack(r2);

	std::cout << std::endl;

	std::cout << r1.getName() << " has " << r1.getHitpoints() << " hp." << std::endl;
	std::cout << r1.getName() << " has " << r1.getEnergypoints() << " energy." << std::endl;
	std::cout << r2.getName() << " has " << r2.getHitpoints() << " hp." << std::endl;
	std::cout << r2.getName() << " has " << r2.getEnergypoints() << " energy." << std::endl;
	std::cout << r3.getName() << " has " << r3.getHitpoints() << " hp." << std::endl;
	std::cout << r3.getName() << " has " << r3.getEnergypoints() << " energy." << std::endl;

	std::cout << std::endl;

	return 0;
}