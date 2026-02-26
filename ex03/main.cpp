#include "HumanA.hpp"
#include "HumanB.hpp"

// Función principal - demuestra diferencia entre referencia y puntero a Weapon
int main()
{
	// === TEST CASE 1: HumanA con referencia ===
	// HumanA siempre tiene arma (referencia obligatoria)
	{
		// Creamos un arma en el stack
		Weapon club = Weapon("crude spiked club");
		
		// HumanA recibe el arma por referencia
		// Siempre tendrá un arma válida
		HumanA bob("Bob", club);
		bob.attack();  // "crude spiked club"
		
		// Cambiamos el tipo del arma original
		club.setType("some other type of club");
		bob.attack();  // "some other type of club" - refleja el cambio
	}
	// bob y club se destruyen aquí

	// === TEST CASE 2: HumanB con puntero ===
	// HumanB puede no tener arma (puntero opcional)
	{
		// Creamos un arma en el stack
		Weapon club = Weapon("crude spiked club");
		
		// HumanB se crea sin arma
		HumanB jim("Jim");
		
		// Le asignamos el arma después
		jim.setWeapon(club);
		jim.attack();  // "crude spiked club"
		
		// Cambiamos el tipo del arma original
		club.setType("some other type of club");
		jim.attack();  // "some other type of club" - refleja el cambio
	}
	// jim y club se destruyen aquí

return 0;
}