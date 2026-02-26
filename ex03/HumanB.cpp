#include "HumanB.hpp"

// Constructor por defecto - crea HumanB sin nombre ni arma
HumanB::HumanB(){}

// Constructor con nombre - crea HumanB solo con nombre
// Nota: no tiene arma todavía
HumanB::HumanB(std::string name):
	_name(name)
{}

// Destructor
HumanB::~HumanB(){}

// Función de ataque: HumanB ataca si tiene arma
// IMPORTANTE: debe verificar que weapon no sea NULL antes de usarlo
void	HumanB::attack(){
	if (_weapon)
		std::cout << _name << " attacks with their " << (*_weapon).getType() << std::endl;
	else
		std::cout << _name << " has no weapon to attack!" << std::endl;
}

// Setter: establece el arma para HumanB
// Parámetro: referencia al arma que se usará
// Nota: guardamos la dirección del arma (puntero)
void	HumanB::setWeapon(Weapon& newWeapon){
	_weapon = &newWeapon;
}
