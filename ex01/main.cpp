/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peli <peli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 15:22:52 by peli              #+#    #+#             */
/*   Updated: 2025/04/14 17:34:03 by peli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <csignal>
#include <cstdlib>
#include <stdio.h>
#include <unistd.h>
#include "Phonebook.hpp"
#include "Contact.hpp"
#include "Contact.cpp"
#include "Phonebook.cpp"

void	signal_handler(int signum)
{
	std::exit(signum);
}
bool	entryindex_valide(std::string line)
{
	int	i;

	if (line.length() != 1 || !std::isdigit(line[0]))
		return (false);
	i = line[0] - '0';
	if (i < 1 || i > 8)
		return (false);
	return (i);
}

int	main()
{
	Phonebook	Phonebook;
	Contact		Contact;
	std::string	line;
	int	index;

	signal(SIGINT, signal_handler);
	index = 1;
	while (1)
	{	
		if (index == 9)
			index = 1;
		std::getline(std::cin, line);
		if (line == "ADD")
		{
			Phonebook.add_contact();
		}
		if (line == "SEARCH")
		{
			Phonebook.display_contact();
			std::cout << "Entry the index of contact : ";
			std::getline(std::cin, line);
			if (entryindex_valide(line) == false)
				std::cout << " Erreur : veuillez entrer un chiffre entre 1 et 8 " << std::endl;
			else 
			{
				if (line[0] - '0' > index)
					std::cout << "Erreur : no exist the contact" << std::endl;
				else
					Contact.search_solo(entryindex_valide(line));
			}
		}
		if (line == "EXIT")
			std::exit(0);
	}
	return (0);
}
