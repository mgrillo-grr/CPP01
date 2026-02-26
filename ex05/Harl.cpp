#include "Harl.hpp"

// Constructor por defecto - no requiere inicialización especial
Harl::Harl() {}

// Destructor - no requiere limpieza especial
Harl::~Harl() {}

// Función privada: queja a nivel DEBUG
// Contiene información contextual para diagnóstico
void	Harl::_debug(void)
{
	std::cout
		<< "[DEBUG]" << std::endl
		<< "I love having extra bacon for my "
		<< "7XL-double-cheese-triple-pickle-special-ketchup burger. "
		<< "I really do!" << std::endl;
}

// Función privada: queja a nivel INFO
// Contiene información extensa para trazar ejecución
void	Harl::_info(void)
{
	std::cout
		<< "[INFO]" << std::endl
		<< "I cannot believe adding extra bacon costs more money. "
		<< "You didn't put enough bacon in my burger! "
		<< "If you did, I wouldn't be asking for more!"
		<< std::endl;
}

// Función privada: queja a nivel WARNING
// Indica un problema potencial que puede ser manejado
void	Harl::_warning(void)
{
	std::cout
		<< "[WARNING]" << std::endl
		<< "I think I deserve to have some extra bacon for free. "
		<< "I've been coming for years whereas you started working here since last month."
		<< std::endl;
}

// Función privada: queja a nivel ERROR
// Indica un error irrecuperable que requiere intervención
void	Harl::_error(void)
{
	std::cout
		<< "[ERROR]" << std::endl
		<< "This is unacceptable! "
		<< "I want to speak to the manager now."
		<< std::endl;
}

// Función pública: selecciona y ejecuta la queja apropiada
// Usa punteros a funciones miembro para evitar if/else forest
// Parámetro: level - string con el nivel de queja ("DEBUG", "INFO", "WARNING", "ERROR")
void	Harl::complain(std::string level)
{
	// Array de punteros a funciones miembro privadas
	// Cada elemento apunta a una función de queja específica
	void	(Harl::*complaintFunctions[_NUM_LEVELS])();
	
	// Array de strings con los nombres de los niveles
	// Debe estar en el mismo orden que complaintFunctions
	std::string	levelNames[_NUM_LEVELS];

	// Inicializamos el array de punteros a funciones
	// La sintaxis &Clase::función obtiene la dirección de la función miembro
	complaintFunctions[0] = &Harl::_debug;
	complaintFunctions[1] = &Harl::_info;
	complaintFunctions[2] = &Harl::_warning;
	complaintFunctions[3] = &Harl::_error;

	// Inicializamos el array de nombres de niveles
	levelNames[0] = "DEBUG";
	levelNames[1] = "INFO";
	levelNames[2] = "WARNING";
	levelNames[3] = "ERROR";

	// Buscamos el nivel solicitado y ejecutamos la función correspondiente
	for (int i = 0; i < _NUM_LEVELS; i++)
	{
		if (levelNames[i] == level)
		{
			// Sintaxis para llamar a función miembro a través de puntero:
			// (objeto->*puntero_a_función)(parámetros)
			(this->*complaintFunctions[i])();
			return;  // Salimos después de encontrar y ejecutar
		}
	}
	// Si no encontramos el nivel, mostramos mensaje por defecto
	std::cout << "[Probably complaining about insignificant problems]" << std::endl;
}