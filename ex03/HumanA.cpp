#include "HumanA.hpp"

// Constructor: inicializa HumanA con nombre y arma (referencia)
// La referencia asegura que HumanA siempre tendrá un arma
HumanA::HumanA(std::string name, Weapon& weapon):
	_name(name),
	_weapon(weapon)
{}

// Destructor
HumanA::~HumanA(){};

// Función de ataque: HumanA ataca con su arma
// Siempre tiene arma porque se pasó por referencia en el constructor
void	HumanA::attack(){
	std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}
