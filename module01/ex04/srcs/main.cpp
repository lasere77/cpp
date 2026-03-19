#include <iostream>
#include <fstream>
#include <string>

std::string	replace(std::string str, std::string s1, std::string s2)
{
	std::string	result;
	size_t		p;

	p = str.find(s1);
	if (p == std::string::npos || s1.empty())
		return (str);
	while (p != std::string::npos)
	{
		result.append(str.substr(0, p));
		result.append(s2);
		str = &str[p + s1.length()];

		p = str.find(s1);
	}
	result.append(str.substr(0, str.length()));
	return (result);
}


int main(int argc, char **argv)
{
	std::ifstream	input_file;
	std::ofstream	output_file;
	std::string		str;

	if (argc != 4)
		return (1);
	input_file.open(argv[1]);
	if (!input_file.is_open())
	{
		std::cout << "Error opening: {" << argv[1] << "}" << std::endl;
		return (1);
	}
	str = argv[1];
	output_file.open(str.append(".replace").c_str());
	while (std::getline(input_file, str))
		output_file << replace(str, argv[2], argv[3]).c_str() << '\n';
	input_file.close();
	output_file.close();
	return (0);
}
