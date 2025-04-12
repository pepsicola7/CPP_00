/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peli <peli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 15:22:44 by peli              #+#    #+#             */
/*   Updated: 2025/04/12 16:39:45 by peli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <string>
#include <iostream>
#include <dirent.h>
#include <Contact.hpp>

class	Phonebook
{
	public:
	Phonebook() : index(1) {}
	void add_contact()
	{
		if (index > 8)
			index = 1;
		if (index < 8)
		{
			Contact[index].add_index(index);
			Contact[index].add_firstName();
			Contact[index].add_lastName();
			Contact[index].add_nickName();
			Contact[index].add_phonenumber();
			Contact[index].add_darkestsecret();
			index++;
		}
	}
	void	display_contact()
	{
		int	i;
		
		i = 1;
		std::cout << "     Index|First name| Last name|  Nickname" << std::endl;
		while (i <= index)
		{
			
			i++;
		}
	}
	void	search_contact(int i)
	{
		Contact[i].search_solo(i);
	}
	private:
	int	index;
	Contact	Contact[8];
};

#endif

