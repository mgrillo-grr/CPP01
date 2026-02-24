#include "HumanB.hpp"

HumanB::HumanB(){}

HumanB::HumanB(std::string name):
name(name)
{}

HumanB::~HumanB(){}

void	HumanB::attack(){
	std::cout<<name<<" attacks with their "<<(*weapon).getType()<<std::endl;
}

void	HumanB::setWeapon(Weapon& newWeapon){
weapon = &newWeapon;
}
