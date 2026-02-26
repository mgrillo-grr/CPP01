#include "Harl.hpp"

// Función principal - programa de prueba para Harl
// Demuestra el uso de punteros a funciones miembro
int	main(int argc, char **argv)
{
	// Creamos una instancia de Harl
	Harl	harl;

	// Verificamos que se proporcionen argumentos
	// El programa acepta uno o más niveles de queja
	if (argc < 2)
	{
		std::cout << "Usage: ./harl [DEBUG] [INFO] [WARNING] [ERROR]" << std::endl;
		std::cout << "Example: ./harl DEBUG INFO WARNING ERROR" << std::endl;
		return (1);
	}
	
	// Procesamos cada argumento como un nivel de queja
	// argv[0] es el nombre del programa, así que empezamos en argv[1]
	for (int i = 1; argv[i]; i++)
	{
		// Convertimos el argumento a string y lo pasamos a Harl
		std::string level = argv[i];
		harl.complain(level);
	}
	return (0);
}