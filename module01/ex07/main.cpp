//
// Created by Leo JULIEN on 4/26/21.
//

#include <iostream>
#include <fstream>
#include <string>

int main(int ac, char **av)
{
    if (ac == 4)
    {
        //copy input file into a string

        std::ifstream infile(av[1]);

        std::string line;
        std::string out_text;
        while (getline(infile, line))
        {
            out_text.append(line);
            out_text.append("\n");
        }
        infile.close();


        // replace
        std::string from = std::string(av[2]);
        std::string to = std::string(av[3]);
        if (from != "") {

            // open output file

            std::string output_path = std::string(av[1]);
            output_path.append(".replace");
            std::ofstream outfile(output_path);

            while (out_text.find(from) != std::string::npos)
                out_text.replace(out_text.find(from), from.length(), to);

            //apply string to output file

            outfile << out_text;
        }
        else
            std::cout << "Usage : ./replace FILENAME s1 s2" << std::endl;
    }
    else
        std::cout << "Usage : ./replace FILENAME s1 s2" << std::endl;
    return 0;
}