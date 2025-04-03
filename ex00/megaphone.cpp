#include <iostream>
#include <cctype>

void *uppercase_str(std::string argv)
{
	int	i;

	i = 0;
	while (argv[i])
	{
		if (argv[i] != """")
		{
			argv[i] = std::toupper(argv[i]);
			std::cout << argv[i] << 
		}
		else 
			i++;
		i++;
	}
	return (argv);
}

int	main(int argc, char *argv[])
{
	int		i;
	char	*str;
	if (argc < 0)
		return (1);
	if (argc == 0)
		return (0);
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	i = 0;
	while (i != argc - 1)
	{
		uppercase_str(std::string(argv[i]));
		i++;
	}
	return (0);
}