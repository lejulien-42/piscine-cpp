//
// -Created by lejulien @ 42
//

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <exception>
#include "ShrubberyCreationForm.hpp"

int
	main()
{
	// Bad Initialization test
	
	Form *a = new ShrubberyCreationForm("nowhere");
	return (0);

}
