#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

// Clase HumanB - humano que puede o no tener arma
// Demuestra uso de punteros (opcionalidad y nulidad)
class HumanB
{
	private:
		std::string _name;   // Nombre del humano (privado con _)
		Weapon*	_weapon;    // Puntero a arma (puede ser NULL)
	
	public:
		// Constructor por defecto - crea humano sin nombre ni arma
		HumanB();
		
		// Constructor con nombre - crea humano solo con nombre
		// Nota: no tiene arma todavía (weapon = NULL)
		HumanB(std::string name);
		
		// Destructor
		~HumanB();
		
		// Función de ataque: ataca si tiene arma
		// Debe verificar que weapon no sea NULL antes de usarlo
		void	attack();
		
		// Setter: establece el arma para HumanB
		// Parámetro: referencia al arma que se usará
		// Nota: guardamos la dirección (puntero) para permitir nulidad
		void	setWeapon(Weapon& newWeapon);
};

#endif
