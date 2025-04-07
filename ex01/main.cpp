/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peli <peli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 15:22:52 by peli              #+#    #+#             */
/*   Updated: 2025/04/07 18:38:32 by peli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <signal.h>
#include <stdio.h>
#include <unistd.h>

void	signal_handler(int signum)
{
	std::exit(signum);
}

int	main()
{
	std::string line;
	while (1)
	{
		std::getline( std::cin, line );
		std::cout << line << std::endl;
		signal(SIGINT, signal_handler);
	}
	// if (line == "HELLO")
	// 	std::cout << "Hello entered" << std::endl;
}