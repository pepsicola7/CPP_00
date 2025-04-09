/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peli <peli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 15:22:44 by peli              #+#    #+#             */
/*   Updated: 2025/04/08 17:30:04 by peli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <dirent.h>
#include "Contact.hpp"

class	Phonebook
{
	//Tout ce qui suit est public
	//Les methodes
	public:
	
	//Tout ce qui suit est prive (inaccessible de l'exterieur)
	//Les attributs
	private:
	Contact contact;
	int	index;
};

