//
// Created by Leo JULIEN on 4/27/21.
//

#include <iostream>
#include <string>
#include <fstream>

char
*ft_to_upper(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = std::toupper(str[i]);
        i++;
    }
    return (str);
}

void    set_header(std::ofstream &output)
{
    output << "//" << std::endl << "// Created by lejulien @ 42" << std::endl << "//" << std::endl << std::endl;
}

void    set_footer(std::ofstream &output)
{
    output << std::endl << "// ----- by lejulien -----" << std::endl;
}

int main(int ac, char **av)
{
    if (ac == 2)
    {
        std::string name = av[1];
        std::string upper_name = ft_to_upper(av[1]);

        // .HPP
        std::string out_file = name;
        out_file.append(".hpp");
        std::ofstream output_hpp(out_file);

        // creating a simple header
        set_header(output_hpp);

        // writing header protection
        output_hpp << "#ifndef " << upper_name << "_HPP" << std::endl;
        output_hpp << "# define " << upper_name << "_HPP" << std::endl << std::endl;

        // basic include
        output_hpp << "#include <iostream>" << std::endl << std::endl;

        // starting creating canonical class
        output_hpp << "class " << name << std::endl << "{" << std::endl;

        output_hpp << "public:" << std::endl;
        output_hpp << "\t" << name << "( void );" << std::endl;
        output_hpp << "\t" << name << "( " << name << " const & src );" << std::endl;
        output_hpp << "\t~" << name << "( void );" << std::endl << std::endl;
        output_hpp << "\t" << name << " &\toperator=( " << av[1] << " const & rhs );" << std::endl << std::endl;
        output_hpp << "private:" << std::endl;
        output_hpp << "\tint\t_foo;" << std::endl;

        // ending the class
        output_hpp << "};" << std::endl;

        set_footer(output_hpp);

        output_hpp.close();


        // .CPP
        out_file = name;
        out_file.append(".cpp");
        std::ofstream output_cpp(out_file);

        // setting up the header
        set_header(output_cpp);

        // setting up includes
        output_cpp << "#include <iostream>" << std::endl << "#include \"" << name << ".hpp\"" << std::endl << std::endl;

        // starting canonical declarations
        output_cpp << name << "::" << name << "( void )" << std::endl << "{}" << std::endl << std::endl;

        output_cpp << name << "::~" << name << "( void )" << std::endl << "{}" << std::endl << std::endl;

        output_cpp << name << "::" << name << "( " << name << " const & srcs )" << std::endl << "{" << std::endl;
        output_cpp << "\t*this = src;" << std::endl << "\treturn ;" << std::endl << "}" << std::endl <<std::endl;

        output_cpp << name << "&\t" << name << "::operator=( " << name << " const & rhs )" << std::endl << "{" << std::endl;
        output_cpp << "\tif ( this != &rhs )" << std::endl << "\t\tthis->_foo = rhs.getFoo();" << std::endl << "}" << std::endl;

        set_footer(output_cpp);

        output_cpp.close();
    }
    else
        std::cout << "Usage : ./generator <class_name>" << std::endl;
}