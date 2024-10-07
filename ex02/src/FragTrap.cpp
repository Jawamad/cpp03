#include "../inc/FragTrap.hpp"


FragTrap::FragTrap()
{
	setHitpoints(100);
	setMaxhitpoints(100);
	setEnergypoints(100);
	setAttackdamage(30);
	std::cout << "A FRAGTRAP is construct" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	setName(name);
	setMaxhitpoints(100);
	setHitpoints(100);
	setEnergypoints(100);
	setAttackdamage(30);
	std::cout << "A FRAGTRAP "<< name <<" is construct" << std::endl;
}

FragTrap::FragTrap(const FragTrap& obj)
{
	*this = obj;
	std::cout << "A copy FRAGTRAP is construct" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FRAGTRAP is destruct" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	if (getHitpoints() == 0)
		std::cout << "FragTrap " << getName() << " is dead and cannot do high five anymore." << std::endl;
	else
		std::cout << "FragTrap " << getName() << " is doing an High Five 👏!" << std::endl;
}

