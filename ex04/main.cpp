#include <iostream>
#include <fstream>
#include <string>
#include <cstring>

int     main(int argc, char **argv)
{
	char		*infileName;
	char		*outfileName;
	std::string line;
	std::string s1;
	std::string s2;
	

	if (argc != 4)
		return (printMessage(1));
	s2 = argv[3];
	s1 = argv[2];
	if (s1.empty())
		return (printMessage(2));

	infileName = new char[std::strlen(argv[1]) + 1];
	outfileName = new char[std::strlen(argv[1]) + 9];
	std::strcpy(infileName, argv[1]);
	std::strcpy(outfileName, infileName);
	std::strcat(outfileName, ".replace");

	std::ifstream inputFile(infileName);
	if (inputFile.is_open() == false)
		return (delete[] infileName, delete[] outfileName, printMessage(3));

	std::ofstream outputFile(outfileName, std::ios::out);
	if (outputFile.is_open() == false)
		return (delete[] infileName, delete[] outfileName, inputFile.close(), printMessage(4));
	
	while (std::getline(inputFile, line))
	{
		std::string lineReplaced;
		size_t	pos = 0;
		while (pos < line.length())
		{
			size_t foundPos = line.find(s1, pos);
			if (foundPos != std::string::npos)
			{
				lineReplaced += line.substr(pos, foundPos - pos);
				lineReplaced += s2;
				pos = foundPos + s1.length();
			}
			else
			{
				lineReplaced += line.substr(pos);
                break;
			}
		}
		outputFile << lineReplaced << std::endl; 
	}
	return (inputFile.close(), outputFile.close(), delete[] infileName, delete[] outfileName, 0);
}

int		printMessage(int mode)
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
