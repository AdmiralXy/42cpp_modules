#include <iostream>
#include <fstream>

int find_replace(char *argv[])
{
	std::string filename = argv[1];
	std::ifstream input(filename.c_str());

	if (input.fail())
	{
		std::cout << filename << " file doesn't exists!" << std::endl;
		return (1);
	}

	std::string new_filename = filename + ".replace";
	std::ofstream output(new_filename.c_str());
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	std::string content;

	content.assign(std::istreambuf_iterator<char>(input),
			std::istreambuf_iterator<char>());

	for (size_t i = 0; i < content.length(); i++)
	{
		if (content.compare(i, s1.length(), s1) == 0)
		{
			content.erase(i, s1.length());
			content.insert(i, s2);
		}
	}

	output << content << std::endl;

	input.close();
	output.close();

	return (0);
}

int	main(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cout << "usage: ./replace [filename] [s1] [s2]" << std::endl;
		return (1);
	}
	return find_replace(argv);
}
