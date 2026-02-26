#include <iostream>
#include <fstream>
#include <string>

// Función de manejo de errores - muestra mensajes específicos
// Parámetro: mode - tipo de error (1-4)
// Retorna: código de error correspondiente
int	printErrorMessage(int mode)
{
	if (mode == 1)
		std::cerr << "Wrong Amount of arguments." << std::endl
		<< "\tUsage: ./sedisforlosers fileName s1 s2" << std::endl;
	else if (mode == 2)
		std::cerr << "Expected expression for s1" << std::endl;
	else if (mode == 3)
		std::cerr << "Failed to Open Input File" << std::endl;
	else if (mode == 4)
		std::cerr << "Failed to Open Output File" << std::endl;
	return (mode);
}

// Función principal - programa de reemplazo de texto (similar a sed)
// Sin usar std::string::replace como requiere el ejercicio
int	main(int argc, char **argv)
{
	// Variables para procesamiento
	std::string	line;           // Línea actual del archivo
	std::string	toFind;         // Texto a buscar (s1)
	std::string	replaceWith;    // Texto de reemplazo (s2)
	std::string	inputFileName;   // Nombre del archivo de entrada
	std::string	outputFileName;  // Nombre del archivo de salida
	const std::string	REPLACE_EXTENSION = ".replace";  // Extensión para archivo de salida

	// Validamos número de argumentos: programa + archivo + s1 + s2 = 4
	if (argc != 4)
		return (printErrorMessage(1));
	
	// Asignamos los parámetros
	toFind = argv[2];
	replaceWith = argv[3];
	
	// Validamos que s1 no esté vacío (no tiene sentido reemplazar nada)
	if (toFind.empty())
		return (printErrorMessage(2));

	// Construimos nombres de archivos
	inputFileName = argv[1];
	outputFileName = inputFileName + REPLACE_EXTENSION;

	// Abrimos archivo de entrada para lectura
	// .c_str() necesario para compatibilidad con C++98
	std::ifstream	inputFile(inputFileName.c_str());
	if (!inputFile.is_open())
		return (printErrorMessage(3));

	// Abrimos archivo de salida para escritura
	std::ofstream	outputFile(outputFileName.c_str());
	if (!outputFile.is_open())
		return (inputFile.close(), printErrorMessage(4));
	
	// Procesamos el archivo línea por línea
	while (std::getline(inputFile, line))
	{
		std::string	lineReplaced;  // Línea con reemplazos aplicados
		size_t	pos = 0;           // Posición actual en la línea
		
		// Buscamos y reemplazamos todas las ocurrencias
		while (pos < line.length())
		{
			// Buscamos la siguiente ocurrencia de toFind desde pos
			size_t	foundPos = line.find(toFind, pos);
			if (foundPos != std::string::npos)
			{
				// Agregamos texto antes de la ocurrencia
				lineReplaced += line.substr(pos, foundPos - pos);
				// Agregamos el texto de reemplazo
				lineReplaced += replaceWith;
				// Avanzamos la posición después de la ocurrencia encontrada
				pos = foundPos + toFind.length();
			}
			else
			{
				// No hay más ocurrencias, agregamos el resto de la línea
				lineReplaced += line.substr(pos);
				break;
			}
		}
		// Escribimos la línea procesada al archivo de salida
		outputFile << lineReplaced << std::endl;
	}
	// Cerramos ambos archivos (automático al salir del scope, pero explícito es mejor)
	return (inputFile.close(), outputFile.close(), 0);
}
