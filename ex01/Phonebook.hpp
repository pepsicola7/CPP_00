/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peli <peli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 15:22:44 by peli              #+#    #+#             */
/*   Updated: 2025/04/10 15:50:40 by peli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <dirent.h>
#include <Contact.hpp>

class	Phonebook
{
	public:
	int index = 0;
	void add_contact()
	{
		if (index < 8)
			m_contact[1] = 
	}

	private:
	int	index;
	std::string*	m_contact[8];
};

