#ifndef INC_42CPP_MODULES_FORM_H
#define INC_42CPP_MODULES_FORM_H

#include "Bureaucrat.hpp"
#include <iostream>
#include <iomanip>

class Bureaucrat;

class Form
{
private:
	const std::string name;
	bool is_signed;
	const int grade_to_sign;
	const int grade_to_execute;
	Form();
public:
	Form(std::string name, int grade_to_sign, int grade_to_execute);
	Form(const Form &form);
	~Form();
	Form &operator=(const Form &form);
	std::string getName() const;
	bool getIsSigned() const;
	int getGradeToSign() const;
	int getGradeToExecute() const;
	class GradeTooHighException : public std::exception {
		virtual const char* what() const throw();
	};
	class GradeTooLowException: public std::exception {
		virtual const char* what() const throw();
	};
	void beSigned(const Bureaucrat &bureaucrat);
};

std::ostream &operator<<(std::ostream &os, const Form &form);

#endif
