/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peli <peli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 15:22:52 by peli              #+#    #+#             */
/*   Updated: 2025/04/10 15:35:59 by peli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <csignal>
#include <cstdlib>
#include <stdio.h>
#include <unistd.h>
#include "Phonebook.hpp"
#include "Contact.hpp"

void	signal_handler(int signum)
{
	std::exit(signum);
}

int	entre_add(int index)
{
	Contact contact;
	std::string	phonenumbre;
	std::string	darkestsecret;

	index++;
	return (index);
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
			Contact.add_index(index);
			Contact.add_firstName();
			Contact.add_lastName();
			Contact.add_nickName();
			Contact.add_phonenumber();
			Contact.add_darkestsecret();
		if (line == "SEARCH")
		{
			
		}
		if (line == "EXIT")
			std::exit(0);
		// std::cout << line << std::endl;
	}
	// if (line == "HELLO")
	// 	std::cout << "Hello entered" << std::endl;
}