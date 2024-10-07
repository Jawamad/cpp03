#ifndef CLAPTRAP_HPP
#	define CLAPTRAP_HPP

#include <iostream>
class ClapTrap
{
	protected:
		std::string	_name;
		unsigned int	_hitpoints;
		unsigned int	_maxhitpoints;
		unsigned int	_energypoints;
		unsigned int				_attackdamage;
	public:
		ClapTrap();
		ClapTrap(std::string nm);
		ClapTrap(const ClapTrap& obj);
		~ClapTrap();
		std::string				getName()const;
		void					setName(std::string nm);
		unsigned int			getHitpoints()const;
		void					setHitpoints(unsigned int hp);
		unsigned int			getEnergypoints()const;
		void					setEnergypoints(unsigned int ep);
		unsigned int			getAttackdamage()const;
		void					setAttackdamage(unsigned int ad);
		unsigned int			getMaxhitpoints()const;
		void					setMaxhitpoints(unsigned int mhp);
		ClapTrap&				operator=(const ClapTrap& obj);

		void		attack(const std::string& target);
		void		attack(ClapTrap& obj);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
};

#endif