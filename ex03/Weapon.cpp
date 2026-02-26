#include "Weapon.hpp"

// Constructor por defecto - crea arma sin tipo
Weapon::Weapon(){}

// Constructor con parámetro - crea arma con tipo específico
Weapon::Weapon(std::string newType):
	_type(newType)
{}

// Destructor
Weapon::~Weapon(){}

// Getter: retorna el tipo del arma como referencia constante
// Evita copias innecesarias y previene modificaciones
const std::string	Weapon::getType()
{
	return (_type);
}

// Setter: establece un nuevo tipo para el arma
void	Weapon::setType(std::string newType)
{
	_type = newType;
}