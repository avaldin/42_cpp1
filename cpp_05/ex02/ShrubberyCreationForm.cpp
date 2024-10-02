#include <fstream>
#include <iostream>
#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target) : AForm(target, 145, 137), target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &copy) : AForm(copy), target(copy.target) {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &copy)
{
	if (this != &copy)
	{
		AForm::operator=(copy);
		this->target = copy.target;
	}
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}


void ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
	if (!this->getIsSigned())
		throw AForm::NotSignedExeption();
	if (executor.getGrade() > 137)
		throw AForm::GradeTooLowExeption();

	std::ofstream	file(static_cast <std::string> (this->target  + "_shrubbery").c_str());

	file << "                                                         .\n"
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
			"                          ...;%@@@@@%%:;;;;,..";
	file.close();
}
