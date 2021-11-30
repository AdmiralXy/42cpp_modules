#ifndef INC_42CPP_MODULES_CONTACT_H
#define INC_42CPP_MODULES_CONTACT_H

#include <iostream>
#include <iomanip>
#include <string>

class Contact
{
private:
	std::string information[5];
public:
	int index;
	Contact();
	int fill(int index);
	void print(bool isFull);
};


#endif
