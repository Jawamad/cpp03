#include "../inc/ClapTrap.hpp"

ClapTrap::ClapTrap(): _hitpoints(10), _maxhitpoints(10),_energypoints(10) ,_attackdamage(0)
{
	std::cout << "A ClapTrap is construct!" << std::endl;
}
ClapTrap::ClapTrap(std::string nm): _name(nm), _hitpoints(10), _maxhitpoints(10),_energypoints(10) ,_attackdamage(0)
{
	std::cout << _name << " is construct!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& obj)
{
	std::cout << _name << " is construct!" << std::endl;
	*this = obj;
}

ClapTrap::~ClapTrap()
{
	std::cout << _name << " is destruct!" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& obj)
{
	this->_name = obj.getName();
	this->_hitpoints = obj.getHitpoints();
	this->_maxhitpoints = obj.getMaxhitpoints();
	this->_energypoints = obj.getEnergypoints();
	this->_attackdamage = obj.getAttackdamage();
	return *this;
}

std::string	ClapTrap::getName()const
{
	return _name;
}

void	ClapTrap::setName(std::string nm)
{
	_name = nm;
}
unsigned int	ClapTrap::getHitpoints()const
{
	return _hitpoints;
}

void	ClapTrap::setHitpoints(unsigned int hp)
{
	_hitpoints = hp;
}

unsigned int	ClapTrap::getEnergypoints()const
{
	return _energypoints;
}

void	ClapTrap::setEnergypoints(unsigned int ep)
{
	_energypoints = ep;
}

unsigned int	ClapTrap::getAttackdamage()const
{
	return _attackdamage;
}

void	ClapTrap::setAttackdamage(unsigned int ad)
{
	_attackdamage = ad;
}
unsigned int	ClapTrap::getMaxhitpoints()const
{
	return _maxhitpoints;
}

void	ClapTrap::attack(const std::string& target)
{
	if (getEnergypoints() && getHitpoints())
	{
		_energypoints--;
		std::cout << "ClapTrap " << getName()<< " attacks " << target << ", causing " << getAttackdamage() << " points of damage. It's amazing !" << std::endl;
	}
	else
		std::cout << "Claptrap" << getName() << " is too busy to attack " << target << " please remind him later." << std::endl;
}

void	ClapTrap::attack(ClapTrap& obj)
{
	if (getEnergypoints() && getHitpoints())
	{
		_energypoints--;
		std::cout << "ClapTrap " << getName()<< " attacks " << obj.getName() << ", causing " << getAttackdamage() << " points of damage. It's amazing !" << std::endl;
		obj.takeDamage(getAttackdamage());
	}
	else
		std::cout << "Claptrap " << getName() << " is too busy to attack " << obj.getName() << " please remind him later." << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (getHitpoints())
	{
		(getHitpoints() < amount) ? _hitpoints = 0 : _hitpoints -= amount;
		if (getHitpoints())
			std::cout << "ClapTrap " << getName() << " take " << amount <<" damages. he only have " << getHitpoints() << " left!"<< std::endl;
		else
			std::cout << "ClapTrap " << getName() << " is DEAD! Are you happy about that ?" << std::endl;
	}
	else
		std::cout << "Claptrap " << getName() << " is already dead! Please leave him alone." << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (getEnergypoints() && getHitpoints())
	{
		_energypoints--;
		_hitpoints = (_hitpoints + amount > _maxhitpoints) ? _maxhitpoints : _hitpoints + amount;
		std::cout << "Claptrap " << getName() << " repair itself for " << amount << " hit points" << std::endl;
	}
	else
		std::cout << "Claptrap " << getName() << " is too busy to do anything. Please remind him later." << std::endl;

}