#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &bureaucrat)
{
	*this = bureaucrat;
}

Bureaucrat::~Bureaucrat()
{

}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &bureaucrat)
{
	this->grade = bureaucrat.grade;
	return *this;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Bureaucrat::GradeTooHighException grade too high";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Bureaucrat::GradeTooLowException grade too low";
}

std::string Bureaucrat::getName(void) const
{
	return name;
}

int Bureaucrat::getGrade(void) const
{
	return grade;
}

void Bureaucrat::incrementGrade(void)
{
	if (--grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::decrementGrade(void)
{
	if (++grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat)
{
	os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << ".";
	return os;
}

void Bureaucrat::signForm(Form &form)
{
	if (grade <= form.getGradeToSign())
	{
		std::cout << name << " signed " << "form " << form.getName() << std::endl;
		form.beSigned(*this);
	}
	else
	{
		std::cout << name << " couldn't sign " << "form " << form.getName() << " because his grade is too low!" << std::endl;
	}
}
