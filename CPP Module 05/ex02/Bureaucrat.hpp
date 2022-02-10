#ifndef INC_42CPP_MODULES_BUREAUCRAT_H
#define INC_42CPP_MODULES_BUREAUCRAT_H

#include "Form.hpp"
#include <iostream>

class Form;

class Bureaucrat
{
private:
	Bureaucrat();
	const std::string name;
	int grade;
public:
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat &bureaucrat);
	~Bureaucrat();
	Bureaucrat &operator=(const Bureaucrat &bureaucrat);
	class GradeTooHighException : public std::exception {
		virtual const char* what() const throw();
	};
	class GradeTooLowException: public std::exception {
		virtual const char* what() const throw();
	};
	std::string getName(void) const;
	int getGrade(void) const;
	void incrementGrade(void);
	void decrementGrade(void);
	void signForm(Form &form);
	void executeForm(Form const &form);
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat);

#endif
