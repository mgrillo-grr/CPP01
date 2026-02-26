#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>
#include <string>

// Clase Harl - persona que se queja en diferentes niveles
// Demuestra uso de punteros a funciones miembro
class Harl
{
	private:
		static const int	_NUM_LEVELS = 4;  // Número de niveles de queja
		
		// Funciones privadas de queja por nivel
		// Cada una imprime un mensaje específico
		void	_debug(void);     // Nivel DEBUG: información de diagnóstico
		void	_info(void);      // Nivel INFO: información general
		void	_warning(void);   // Nivel WARNING: advertencia
		void	_error(void);     // Nivel ERROR: error crítico

	public:
		// Función pública: selecciona y ejecuta la queja apropiada
		// Usa punteros a funciones miembro para evitar if/else forest
		void	complain(std::string level);
};

#endif
