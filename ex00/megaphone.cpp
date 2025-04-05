#include <iostream>
#include <cctype>

void uppercase_str(std::string argv)
{
	int	i;

	i = 0;
	while (argv[i])
	{
		if (argv[i] != '"')
		{
			argv[i] = std::toupper(argv[i]);
			std::cout << argv[i];
		}
		else 
			i++;
		i++;
	}
	return ;
}

int	main(int argc, char *argv[])
{
	int		i;

	if (argc < 0)
		return (1);
	if (argc == 0)
		return (0);
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	i = 1;
	while (i < argc)
	{
		uppercase_str(std::string(argv[i]));
		if (i != argc - 1)
			std::cout << " " ;
		i++;
	}
	std :: cout << std :: endl;
	return (0);
}