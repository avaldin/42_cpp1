#ifndef EX02_SHRUBBERYCREATIONFORM_HPP
#define EX02_SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
public:

    //constructor, destructor and operator

	ShrubberyCreationForm(const std::string& target);
    ShrubberyCreationForm(ShrubberyCreationForm const &copy);
    ShrubberyCreationForm &operator=(const ShrubberyCreationForm &copy);
    ~ShrubberyCreationForm();

    //methods

	void execute(const Bureaucrat &executor) const override;

    //getteur and setter

private:

	std::string	target;
};

#endif
