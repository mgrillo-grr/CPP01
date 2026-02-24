#include "Harl.hpp"

int     main(int argc, char **argv)
{
    Harl    harl;

    if (argc < 2)
    {
        std::cout << "Usage: ./harl [DEBUG] [INFO] [WARNING] [ERROR]" << std::endl;
        return (1);
    }
    for (int i = 1; argv[i]; i++)
    {
        std::string level = argv[i];
        harl.complain(level);
    }
    return (0);
}