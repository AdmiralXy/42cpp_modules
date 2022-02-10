#ifndef INC_42CPP_MODULES_INTERN_H
#define INC_42CPP_MODULES_INTERN_H

#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
private:
public:
	Intern();
	Intern(const Intern &form);
	~Intern();
	Intern &operator=(const Intern &intern);
	Form *makeForm(std::string form, std::string target);
};


#endif
