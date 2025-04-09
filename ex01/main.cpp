/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peli <peli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 15:22:52 by peli              #+#    #+#             */
/*   Updated: 2025/04/08 17:29:46 by peli             ###   ########.fr       */
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

int	main()
{
	Phonebook	Phonebook;
	std::string	line;
	std::string	firstname;
	std::string	lastname;
	std::string	nickname;
	signal(SIGINT, signal_handler);
	while (1)
	{
		std::getline(std::cin, line);
		if (line == "ADD")
		{
			int	index;

			index = 1;
			std::cout << " first name : ";
			std::getline(std::cin, line);
			Contact 
		}
		if (line == "SEARCH")
		{
			
		}
		if (line == "EXIT")
		{
			std::exit(0);
		}
		// std::cout << line << std::endl;
	}
	// if (line == "HELLO")
	// 	std::cout << "Hello entered" << std::endl;
}