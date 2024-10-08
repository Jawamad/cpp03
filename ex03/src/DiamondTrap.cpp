#include "../inc/DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap()
{
	setEnergypoints(ScavTrap::_specialenergy);
	setHitpoints(FragTrap::getHitpoints());
	setAttackdamage(FragTrap::getAttackdamage());
	std::cout << "DiamondTrap is construct" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), _name(name)
{
	setEnergypoints(ScavTrap::_specialenergy);
	setHitpoints(FragTrap::getHitpoints());
	setAttackdamage(FragTrap::getAttackdamage());
	std::cout << "DiamondTrap is construct" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& obj): ClapTrap(obj), ScavTrap(obj),FragTrap(obj), _name(obj.getName())
{
	std::cout << "DiamondTrap is construct" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap is destruct" << std::endl;
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