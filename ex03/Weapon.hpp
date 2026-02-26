#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <iostream>

// Clase Weapon - representa un arma en el sistema de combate
// Demuestra uso de referencias constantes y encapsulación
class	Weapon
{
	private:
		std::string _type;  // Tipo de arma (privado con _)
	public:
		// Constructor por defecto - crea arma sin tipo
		Weapon();
		
		// Constructor con parámetro - crea arma con tipo específico
		Weapon(std::string name);
		
		// Destructor
		~Weapon();
		
		// Getter: retorna el tipo como referencia constante
		// Evita copias y previene modificaciones externas
		const std::string	getType();
		
		// Setter: establece un nuevo tipo para el arma
		void	setType(std::string newType);
};
#endif