#include "Karen.hpp"

void Karen::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
	std::cout << std::endl;
}
void Karen::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
	std::cout << std::endl;
}

void Karen::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << "I’ve been coming here for years and you just started working here last month." << std::endl;
	std::cout << std::endl;
}

void Karen::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void Karen::default_msg()
{
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}

void Karen::complain(std::string level)
{
	int i = 0;

	std::string levels[] =
	{
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};

	while (i < 4)
	{
		if (level == levels[i])
		{
			complain_recursive(i);
			return ;
		}
		i++;
	}
	complain_recursive(-1);
}

void Karen::complain_recursive(int i)
{
	switch (i)
	{
		case 4:
			break;
		case 3:
			this->error();
			++i;
			complain_recursive(i);
			break;
		case 2:
			this->warning();
			++i;
			complain_recursive(i);
			break;
		case 1:
			this->info();
			++i;
			complain_recursive(i);
			break;
		case 0:
			this->debug();
			++i;
			complain_recursive(i);
			break;
		default:
			this->default_msg();
			break;
	}
}
