/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peli <peli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 15:22:44 by peli              #+#    #+#             */
/*   Updated: 2025/04/07 15:58:24 by peli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class	Phonebook
{
	//Tout ce qui suit est public
	//Les methodes
	public:

	//Tout ce qui suit est prive (inaccessible de l'exterieur)
	//Les attributs
	private:
	std::string	m_firstName;
	std::string	m_lastName;
	std::string	m_nickName; 
	int			m_phoneNumber;
	std::string	m_darkestSecret;
};