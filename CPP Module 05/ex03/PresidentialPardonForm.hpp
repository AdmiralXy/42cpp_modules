#ifndef INC_42CPP_MODULES_PRESIDENTIALPARDONFORM_H
#define INC_42CPP_MODULES_PRESIDENTIALPARDONFORM_H

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
	PresidentialPardonForm();
	const std::string target;
public:
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(const PresidentialPardonForm &form);
	~PresidentialPardonForm();
	PresidentialPardonForm &operator=(const PresidentialPardonForm &form);
	std::string getTarget() const;
	virtual void execute(Bureaucrat const &executor) const;
};


#endif
