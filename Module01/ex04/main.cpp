/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momeaizi <momeaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 19:50:21 by momeaizi          #+#    #+#             */
/*   Updated: 2022/11/26 11:35:01 by momeaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

void    openInFile(std::ifstream &inf, std::string filename)
{
    inf.open( filename );
    if (inf.fail())
    {
        std::cerr << "Cannot open " << filename << "!\n";
        exit(1);
    }
}
void    openOutFile(std::ofstream &outf, std::string filename)
{
    filename += ".replace";
    outf.open( filename );
    if (outf.fail())
    {
        std::cerr << "Cannot open " << filename << "!\n";
        exit(1);
    }
}

int main(int ac, char **av)
{
    std::ifstream   inf;
    std::ofstream   outf;
    
    if (ac != 4)
    {
        std::cerr << "Bad arguments!\n";
        return (1);
    }
    openInFile(inf, av[1]);
    openOutFile(outf, av[1]);
    replace(inf, outf, av[2], av[3]);
    inf.close();
    outf.close();
    return 0;
}
