#include <iostream>
#include <string>

int	main(void)
{
	// Creamos una variable string con el texto requerido
	std::string	brainString = "HI THIS IS BRAIN";
	
	// Creamos un puntero a la variable string
	// El puntero almacena la dirección de memoria de brainString
	std::string	*stringPTR = &brainString;
	
	// Creamos una referencia a la variable string
	// La referencia es un alias/apodo de brainString
	std::string	&stringREF = brainString;

	// Mostramos las direcciones de memoria para comparar
	std::cout << "Memory addresses:" << std::endl;
	std::cout << "\tString variable: " << &brainString << std::endl;    // Dirección original
	std::cout << "\tString pointer:  " << stringPTR << std::endl;        // Dirección almacenada en puntero
	std::cout << "\tString reference:" << &stringREF << std::endl;      // Dirección de la referencia

	// Mostramos los valores para demostrar que todos apuntan al mismo dato
	std::cout << "\nValues:" << std::endl;
	std::cout << "\tString variable: " << brainString << std::endl;      // Valor directo
	std::cout << "\tString pointer:  " << *stringPTR << std::endl;        // Valor desreferenciado del puntero
	std::cout << "\tString reference:" << stringREF << std::endl;        // Valor de la referencia (acceso directo)

	return (0);  // Programa terminado exitosamente
}
