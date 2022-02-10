#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
		: Form("ShrubberyCreationForm", 145, 137), target(target)
{

}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &form)
		: Form(form.getName(), form.getGradeToSign(), form.getGradeToExecute()), target(form.target)
{
	*this = form;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &form)
{
	(void)form;
	return *this;
}

std::string ShrubberyCreationForm::getTarget() const
{
	return target;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (isAbleToExecute(executor))
	{
		std::string filename = target + "_shrubbery";
		std::ofstream output(filename.c_str());
		output << "                                                      .\n"
				  "                                              .         ;  \n"
				  "                 .              .              ;%     ;;   \n"
				  "                   ,           ,                :;%  %;   \n"
				  "                    :         ;                   :;%;'     .,   \n"
				  "           ,.        %;     %;            ;        %;'    ,;\n"
				  "             ;       ;%;  %%;        ,     %;    ;%;    ,%'\n"
				  "              %;       %;%;      ,  ;       %;  ;%;   ,%;' \n"
				  "               ;%;      %;        ;%;        % ;%;  ,%;'\n"
				  "                `%;.     ;%;     %;'         `;%%;.%;'\n"
				  "                 `:;%.    ;%%. %@;        %; ;@%;%'\n"
				  "                    `:%;.  :;bd%;          %;@%;'\n"
				  "                      `@%:.  :;%.         ;@@%;'   \n"
				  "                        `@%.  `;@%.      ;@@%;         \n"
				  "                          `@%%. `@%%    ;@@%;        \n"
				  "                            ;@%. :@%%  %@@%;       \n"
				  "                              %@bd%%%bd%%:;     \n"
				  "                                #@%%%%%:;;\n"
				  "                                %@@%%%::;\n"
				  "                                %@@@%(o);  . '         \n"
				  "                                %@@@o%;:(.,'         \n"
				  "                            `.. %@@@o%::;         \n"
				  "                               `)@@@o%::;         \n"
				  "                                %@@(o)::;        \n"
				  "                               .%@@@@%::;         \n"
				  "                               ;%@@@@%::;.          \n"
				  "                              ;%@@@@%%:;;;. \n"
				  "                          ...;%@@@@@%%:;;;;,..        ";
		output.close();
	}
}
