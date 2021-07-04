//
// -Created by lejulien @ 42-
//

#include <iostream>
#include "ShrubberyCreationForm.hpp"
#include <string>
#include <fstream>

// Constructors and destructor

ShrubberyCreationForm::ShrubberyCreationForm(void):Form("ShrubberyCreationForm", 145, 137), _target("random") {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const target):Form("ShrubberyCreationForm", 145, 137), _target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src): Form("ShrubberyCreationForm", 145, 137)
{
	this->_target = src.getTarget();
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {};

// Functions

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (!this->getSigned())
		this->throwNotReadySigned();
	if (executor.getGrade() > this->getExecuteGrade())
		this->throwTooLow();

	std::string output_path = std::string(this->_target);
	output_path.append("_shrubbery");
	std::ofstream outfile(output_path.c_str());
	outfile << "                                              ." << std::endl << "                                   .         ;" << std::endl << "      .              .              ;%     ;;" << std::endl << "        ,           ,                :;%  %;" << std::endl << "         :         ;                   :;%;'     .," << std::endl << ",.        %;     %;            ;        %;'    ,;" << std::endl << "  ;       ;%;  %%;        ,     %;    ;%;    ,%'" << std::endl << "   %;       %;%;      ,  ;       %;  ;%;   ,%;'" << std::endl << "    ;%;      %;        ;%;        % ;%;  ,%;'" << std::endl << "     `%;.     ;%;     %;'         `;%%;.%;'" << std::endl << "      `:;%.    ;%%. %@;        %; ;@%;%'" << std::endl << "         `:%;.  :;bd%;          %;@%;'" << std::endl << "           `@%:.  :;%.         ;@@%;'" << std::endl << "             `@%.  `;@%.      ;@@%;" << std::endl << "               `@%%. `@%%    ;@@%;" << std::endl << "                 ;@%. :@%%  %@@%;" << std::endl << "                   %@bd%%%bd%%:;" << std::endl << "                     #@%%%%%:;;" << std::endl << "                     %@@%%%::;" << std::endl << "                     %@@@%(o);  . '" << std::endl << "                     %@@@o%;:(.,'" << std::endl << "                 `.. %@@@o%::;" << std::endl << "                    `)@@@o%::;" << std::endl << "                     %@@(o)::;" << std::endl << "                    .%@@@@%::;" << std::endl << "                    ;%@@@@%::;." << std::endl << "                   ;%@@@@%%:;;;." << std::endl << "               ...;%@@@@@%%:;;;;,.." << std::endl << std::endl;
	outfile.close();
}

// Getter and Setters

std::string const	ShrubberyCreationForm::getTarget() const { return this->_target; }

// Overloads

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs)
{
	if (this != &rhs)
		this->_target = rhs.getTarget();
	return *this;
}

// ----- by lejulien -----
