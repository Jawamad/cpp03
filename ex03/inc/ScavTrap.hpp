#ifndef SCAVTRAP_HPP
#	define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	protected:
		unsigned int _specialenergy;
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap& obj);

		~ScavTrap();

		void		attack(const std::string& target);
		void		guardGate();

		ScavTrap& operator=(const ScavTrap& obj);
};


#endif