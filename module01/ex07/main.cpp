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
        if (from != "" && from != to) {

            // open output file

            std::string output_path = std::string(av[1]);
            output_path.append(".replace");
            std::ofstream outfile(output_path.c_str());

            int where = 0;
            int size_get;
            while ((size_get = out_text.find(from, where)) != -1)
            {
                out_text.replace(out_text.find(from, where), from.length(), to);
                where = size_get + to.length();
            }
            std::cout << size_get << std::endl;

            //apply string to output file

            outfile << out_text;
            outfile.close();
        }
        else
            std::cout << "Usage : ./replace FILENAME from to" << std::endl;
    }
    else
        std::cout << "Usage : ./replace FILENAME from to" << std::endl;
    return 0;
}