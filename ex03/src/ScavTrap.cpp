#include "../inc/ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	setHitpoints(100);
	setMaxhitpoints(100);
	setEnergypoints(50);
	_specialenergy = 50;
	setAttackdamage(20);
	std::cout << "A SCAVTRAP is construct" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	setName(name);
	setMaxhitpoints(100);
	setHitpoints(100);
	setEnergypoints(50);
	_specialenergy = 50;
	setAttackdamage(20);
	std::cout << "A SCAVTRAP "<< name <<" is construct" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& obj)
{
	*this = obj;
	std::cout << "A copy SCAVTRAP is construct" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "A SCAVTRAP is destruct" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& obj)
{
	if (this != &obj)
		ClapTrap::operator=(obj);
	return *this;
}

void	ScavTrap::attack(const std::string& target)
{
	if (getEnergypoints() && getHitpoints())
	{
		setEnergypoints(getEnergypoints() - 1);
		std::cout << "ScavTrap " << getName()<< " attacks " << target << ", causing " << _attackdamage << " points of damage. It's better than any other ClapTrap" << std::endl;
	}
	else
		std::cout << "Scavtrap" << getName() << " is too busy to attack " << target << " please remind him later." << std::endl;
}

void		ScavTrap::guardGate()
{
	if (getHitpoints() != 0)
		std::cout << "ScavTrap "<< getName() <<" is now in Gate keeper mode" << std::endl;
	else
		std::cout << "ScavTrap "<< getName() <<" is dead and cannot go in Gate keeper mode" << std::endl;
}