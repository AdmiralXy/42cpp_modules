#ifndef INC_42CPP_MODULES_SHRUBBERYCREATIONFORM_H
#define INC_42CPP_MODULES_SHRUBBERYCREATIONFORM_H

#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
private:
	ShrubberyCreationForm();
	const std::string target;
public:
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm &form);
	~ShrubberyCreationForm();
	ShrubberyCreationForm &operator=(const ShrubberyCreationForm &form);
	std::string getTarget() const;
	virtual void execute(Bureaucrat const &executor) const;
};


#endif
