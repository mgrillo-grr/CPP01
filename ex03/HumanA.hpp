#ifndef HUMANA_HPP
#define HUMANA_HPP
#include "Weapon.hpp"

// Declaración forward de Weapon para evitar dependencia circular
class Weapon;

// Clase HumanA - humano que siempre tiene arma
// Demuestra uso de referencias (garantía de existencia)
class HumanA
{
	private:
		std::string _name;   // Nombre del humano (privado con _)
		Weapon&	_weapon;   // Referencia a arma (siempre válida)
	
	public:
		// Función de ataque: el humano ataca con su arma
		void	attack();
		
		// Constructor: requiere nombre y arma (referencia obligatoria)
		// La referencia asegura que HumanA siempre tendrá un arma válida
		HumanA(std::string name, Weapon &weapon);
		
		// Destructor
		~HumanA();
};
#endif
