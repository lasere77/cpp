#include <iostream>
#include <cctype>

#define DEFAULT_MSG "* LOUD AND UNBEARABLE FEEDBACK NOISE *"

int	main(int argc, char **argv)
{
	size_t	i;

	if (argc == 1)
		std::cout << DEFAULT_MSG;
	i = 1;
	while (argv[i])
	{
		std::string s = argv[i];
		for (std::string::iterator it = s.begin(); it != s.end(); it++)
			std::cout << static_cast<char>(std::toupper(*it));
		i++;
	}
	std::cout << std::endl;
	return (0);
}
