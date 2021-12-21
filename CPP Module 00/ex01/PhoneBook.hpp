#ifndef INC_42CPP_MODULES_PHONEBOOK_H
#define INC_42CPP_MODULES_PHONEBOOK_H

#include "Contact.hpp"
#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>

class PhoneBook
{
private:
	Contact contacts[8];
	int iterator;
public:
	PhoneBook();
	void add();
	void search();
};


#endif
