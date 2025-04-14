/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peli <peli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 15:22:44 by peli              #+#    #+#             */
/*   Updated: 2025/04/14 17:33:36 by peli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <string>
#include <iostream>
#include <dirent.h>
#include "Contact.hpp"

class	Phonebook
{
	public:
	Phonebook();
	void add_contact();
	void	display_contact();
	void	search_contact(int i);

	private:
	int	index;
	Contact	Contact[8];
};

#endif

