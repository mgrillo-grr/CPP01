#ifndef HUMANA_HPP
#define HUMANA_HPP
#include "Weapon.hpp"

class Weapon;
class HumanA
{
	private:
		std::string	name;
		Weapon&		weapon;
	public:
		void		attack();
		HumanA(std::string name, Weapon &weapon);
		~HumanA();

};
#endif
