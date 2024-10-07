#include "../inc/DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap()
{
	setHitpoints(FragTrap::getHitpoints());
	setEnergypoints(ScavTrap::getEnergypoints());
	setAttackdamage(FragTrap::getAttackdamage());
	std::cout << "DiamondTrap is construct" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), _name(name)
{
	setHitpoints(FragTrap::getHitpoints());
	setEnergypoints(ScavTrap::getEnergypoints());
	setAttackdamage(FragTrap::getAttackdamage());
	std::cout << "DiamondTrap is construct" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& obj): ClapTrap(obj), FragTrap(obj), ScavTrap(obj), _name(obj.getName())
{
	std::cout << "DiamondTrap is construct" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap is destruct" << std::endl;
}

void DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << "I am " << _name << " and my ClapTrap name is " << ClapTrap::getName() << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& obj)
{
	if(this != &obj)
	{
		ClapTrap::operator=(obj);
		FragTrap::operator=(obj);
		ScavTrap::operator=(obj);
		_name =obj.getName();
	}
	return *this;
}